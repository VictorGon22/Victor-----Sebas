/*
** EPITECH PROJECT, 2021
** minishel1
** File description:
** main.c
*/

#include "./../includes/library.h"

void type_comands(calculator *flags)
{
    flags[0].op = "my_ls";
    flags[0].ptr = &my_lsfunc;
    flags[1].op = "my_cd";
    flags[1].ptr = &cd_func;
    flags[2].op = "my_pwd";
    flags[2].ptr = &my_pwdfunc;
    flags[3].op = "ls";
    flags[3].ptr = &lsfunc;
    flags[4].op = "cd";
    flags[4].ptr = &cd_func;
    flags[5].op = "env";
    flags[5].ptr = &printenv_func;
    flags[6].op = "pwd";
    flags[6].ptr = &my_pwdfunc;
    flags[7].op = "setenv";
    flags[7].ptr = &setenv_func;
    flags[8].op = "unsetenv";
    flags[8].ptr = &unsetenv_func;
    flags[9].op = "exit";
    flags[9].ptr = &exit_func;
}

int func_pointer(t_var *var, char *params, char *type)
{
    int i = 0;
    int find = 0;
    var->counter_op++;
    calculator flags[10];
    type_comands(flags);
    while (i < 10) {
        if (my_strcmp(type, flags[i].op) == 0) {
            (*(flags[i].ptr))(var, params);
            find = 1;
        }
        i++;
    }
    if (find == 0) {
        try_execute(var, params, type);
    }
}

void try_execute(t_var *var, char *params, char *type)
{
    char *env = get_path(var);
    char **path = paths(env);
    pid_t pid = fork();
    char **params1 = malloc(sizeof(char *));

    params1[0] = my_strdup(type);
    params1[1] = params;
    params1[2] = NULL;
    if (pid == -1) {
        return;
    } else if (pid == 0) {
        if ( execve(find_func(path, type), params1, NULL) < 0)
            my_putstr("sh: ");
            my_put_nbr(var->counter_op);
            my_putstr(": ");
            my_putstr(type);
            my_putstr(": not found\n");
        exit(0);
    } else {
        wait(NULL);
        return;
    }
}

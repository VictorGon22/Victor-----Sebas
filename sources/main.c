/*
** EPITECH PROJECT, 2021
** minishel1
** File description:
** main.c
*/

#include "./../includes/library.h"

char **paths(char *str)
{
    char **result = malloc(sizeof(char *) * 1000);
    int i = 5;
    int n = 0;
    int j = 0;
    while (str[i] != '\0') {
        result[n] = malloc(sizeof(char) * my_strlen(str));
        j = 0;
        my_memset(result[n], '\0', my_strlen(str));
        while (str[i] != ':' && str[i] != '\0') {
            result[n][j++] = str[i++];
        }
        i++;
        n++;
    }
    result[n] = NULL;
    return (result);
}

void print_arg(char ** arg)
{
    int i = 0;

    while (arg[i] != NULL)
    {
        my_putstr(arg[i]);
        i++;
    }
}


t_info_files *init_file(void) {
    t_info_files *res = malloc(sizeof(t_info_files));
    res->name = NULL;
    res->info = NULL;
    res->env = NULL;
    res->next = NULL;
    return res;
}

int main(int argc, char **argv, char **envp)
{
    t_var var;
    var.argv = argv;
    var.argc = argc;
    var.envp = envp;
    char *prova;
    var.counter_op = 0;
    t_info_files *file = init_file();
    var.file = file;
    save_envplinked(file, envp);
    printenv_func(&var, prova);
    while (1)
    {
        get_line_function(&var);
    }
    return (0);
}

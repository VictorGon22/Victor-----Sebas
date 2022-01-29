/*
** EPITECH PROJECT, 2022
** minishel1
** File description:
** main.c
*/

#include "./../includes/library.h"

void cd_func(t_var *var, char *path)
{
    char *current_folder = pwd_func();
    int i = 0;
    int j = 0;

    if (path == NULL) {
        while (j <= 2) {
            if (current_folder[i] == '/')
                j++;
            i++;
        }
        current_folder[i] = '\0';
    } else if (my_strcmp("..", path) == 0) {
        i =  my_strlen(current_folder);
        while (current_folder[i] != '/')
            i--;
        current_folder[i] = '\0';
    } else {
        current_folder = my_strcat(current_folder, "/");
        current_folder = my_strcat(current_folder, path);
    }
    if (chdir(current_folder) == -1)
        my_putstr("cd: No such file or directory: ");
        my_putstr(path);
        my_putstr("\n");
}

void my_lsfunc(t_var *var, char *params)
{
    char **params1 = malloc(sizeof(char *));
    pid_t pid = fork();

    params1[0] = "./my_ls";
    params1[1] = params;
    params1[2] = NULL;
    if (pid == -1) {
        return;
    } else if (pid == 0) {
        if (execve("./my_ls/my_ls", params1, NULL) < 0)
            my_putstr("\nCould not execute command..");
        exit(0);
    } else {
        wait(NULL);
        return;
    }
}

void lsfunc(t_var *var, char *params)
{
    char *env = get_path(var);
    char **path = paths(env);
    pid_t pid = fork();
    char **params1 = malloc(sizeof(char *));

    params1[0] = "./ls";
    params1[1] = params;
    params1[2] = NULL;
    if (pid == -1) {
        return;
    } else if (pid == 0) {
        if ( execve(find_func(path, "ls"), params1, NULL) < 0)
            my_putstr("\nCould not execute command..");
        exit(0);
    } else {
        wait(NULL);
        return;
    }
}

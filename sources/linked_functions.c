/*
** EPITECH PROJECT, 2021
** minishel1
** File description:
** main.c
*/

#include "./../includes/library.h"

t_info_files *ini_linked_envp(char *envp)
{
    t_info_files *file = malloc(sizeof(t_info_files) * 1);

    if (file == NULL)
        perror("error\n");
    file->name = my_strdup(get_command(envp));
    file->info = my_strdup(get_params(envp));
    file->env = my_strdup(envp);
    file->next = NULL;
    return file;
}

void create_new(t_info_files *file, char *envp)
{
    t_info_files *tmp = file;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = ini_linked_envp(envp);
}

void save_envplinked(t_info_files *file, char **envp)
{
    int i = 0;

    while (envp[i] != NULL)
    {
        create_new(file, envp[i]);
        i++;
    }
}
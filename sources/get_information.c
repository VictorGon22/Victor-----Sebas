/*
** EPITECH PROJECT, 2021
** minishel1
** File description:
** main.c
*/

#include "./../includes/library.h"

int get_line_function(t_var *var)
{
    int bytes_read;
    size_t size = 18;
    char *string = NULL;
    char *command = NULL;
    char *params = NULL;

    my_putstr("$> ");
    string = (char *) malloc (size);
    bytes_read = getline(&string, &size, stdin);
    if (bytes_read < 0)
        exit_func(var, command);
    string[my_strlen(string) - 1] = '\0';
    if (bytes_read == -1) {
        exit(84);
    } else {
        func_pointer(var, get_params(string), get_command(string));
    }
    return (0);
}

char *get_path(t_var *var)
{
    t_info_files *tmp = var->file->next;

    while (tmp->next != NULL) {
        if (my_strcmp(tmp->name, "PATH") == 0)
            return (tmp->env);
        tmp = tmp->next;
    }
    return (NULL);
}

char *get_params(char *str)
{
    char *comand = malloc(sizeof(char) * 10000);
    int i = 0;
    int n = 0;
    my_memset(comand, '\0', 10000);

    while (str[i] != '=' && str[i] != '\0' && str[i] != ' ') {
        i++;
    }
    if (str[i] == '\0')
        return (NULL);
    i++;
    while (str[i] != '\0') {
        comand[n] = str[i];
        i++;
        n++;
    }    
    return (comand);
}

char *get_command(char *str)
{
    char *comand = malloc(sizeof(char) * 100);
    int i = 0;
    my_memset(comand, '\0', 100);

    while (str[i] != '=' && str[i] != '\0' && str[i] != ' ') {
        comand[i] = str[i];
        i++;
    }
    return (comand);
}

char **get_env_params(char *str)
{
    char **comand = malloc(sizeof(char *) * 3);
    int i = 0;
    int j = 0;
    int n = -1;

    while (str[i] != '\0') {
        if (str[i] == ' ' && n < 1 || i == 0) {
            n++;
            j = 0;
            comand[n] = malloc(sizeof(char) * my_strlen(str) + 1);
            my_memset(comand[n], '\0', my_strlen(str) + 1);
        }
        comand[n][j] = str[i];
        j++;
        i++;
    }
    comand[n + 1] = NULL;
    return (comand);
}

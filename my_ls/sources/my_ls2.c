/*
** EPITECH PROJECT, 2021
** my_ls2
** File description:
** do flags with diff vaues
*/

#include "./../includes/libraries.h"

void read_flags_dir(t_var *var, char **argv)
{
    int i = 1;
    int j = 1;
    while (argv[i] != NULL) {
        save_flags_dir (var, i, argv);
        i++;
    }
    if (var->directories == 0) {
        var->array_directory[0] =  "./";
        var->directories = 1;
    }
    if (var->flags == 0 || var->flags == 1 &&
    find_in_array(var->array_flags, 'a')) {
        var->array_flags[var->flags] =  'y';
        var->flags = 1;
    }

}

void save_flags_dir (t_var *var, int i, char **argv)
{
    int  j = 1;
    if (argv[i][0] == '-'){
        j = 1;
        while (argv[i][j] != '\0') {
            var->array_flags[var->flags] = argv[i][j];
            var->flags++;
            j++;
        }
    } else {
        var->array_directory[var->directories] = argv[i];
        var->directories++;
    }
    var->array_flags[var->flags] = '\0';
    var->array_directory[var->directories] = NULL;
}

void ini_variable(t_var *var, int argc)
{
    var->i = 0;
    var->j = 0;
    var->x = 0;
    var->flags = 0;
    var->directories = 0;
    var->argc = argc;
    var->fullpath = NULL;
}

char *func_fullpath(char *filepath, char *name, char *fullpath)
{
    my_strcpy(fullpath, filepath);
    if (filepath[my_strlen(filepath) - 1] != '/')
        my_strcat(fullpath, "/");
    my_strcat(fullpath, name);
    return (fullpath);
}

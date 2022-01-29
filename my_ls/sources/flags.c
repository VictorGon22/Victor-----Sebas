/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do flags with diff vaues
*/

#include "./../includes/libraries.h"

void func_l(t_var *var, char *filepath)
{
    t_info_files *file = malloc(sizeof(t_info_files));
    file->next = NULL;
    struct dirent *dirp;
    DIR *dp;

    dp = opendir(filepath);
    while ((dirp = readdir(dp)) != NULL) {
        var->fullpath = malloc(my_strlen(filepath) + 2 +
        my_strlen(dirp->d_name));
        if (dirp->d_name[0] != '.' && dirp->d_name[1] != '.' ||
        find_in_array(var->array_flags, 'a'))
            create_new(file, func_fullpath(filepath, dirp->d_name,
            var->fullpath), dirp->d_name);
    }
    manage_sort(var, file);
    printlinked(file);
    free(var->fullpath);
    free(file);
    closedir(dp);
}

void func_y(t_var *var, char *filepath)
{
    t_info_files *file = malloc(sizeof(t_info_files));
    file->next = NULL;
    struct dirent *dirp;
    DIR *dp;

    dp = opendir(filepath);
    while ((dirp = readdir(dp)) != NULL) {
        var->fullpath = malloc(my_strlen(filepath) + 2 +
        my_strlen(dirp->d_name));
        if (dirp->d_name[0] != '.' && dirp->d_name[1] != '.' ||
        find_in_array(var->array_flags, 'a'))
            create_new(file, func_fullpath(filepath, dirp->d_name,
            var->fullpath), dirp->d_name);
    }
    manage_sort(var, file);
    printlinked_noflags(file);
    free(var->fullpath);
    free(file);
    closedir(dp);
}

void func_ld(t_var *var2, char *filepath)
{
    t_var *var = malloc(sizeof(t_var));
    t_info_files *file = malloc(sizeof(t_info_files));
    file->next = NULL;
    int tmp = 0;

    create_new(file, filepath, filepath);
    free(var);
    printlinked_d(file);
    free(file);
}

void func_d(t_var *var2, char *filepath)
{
    my_putstr(filepath);
    if (var2->x + 1 ==  var2->directories)
        my_putstr("\n");
    else
        my_putstr(" ");
}

void func_w(t_var *var2, char *filepath)
{
    int i = 0;
    struct dirent *dirp;
    DIR *dp;

    dp = opendir(filepath);
    while ((dirp = readdir(dp)) != NULL) {
        if (dirp->d_name[0] != '.' && dirp->d_name[1] != '.') {
            my_putstr(dirp->d_name);
        }
    }
    my_putstr("\n");
    closedir(dp);
}
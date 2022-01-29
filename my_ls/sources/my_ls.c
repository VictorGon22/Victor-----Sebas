/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do flags with diff vaues
*/

#include "./../includes/libraries.h"

int look_for_l(char *flags)
{
    int i = 0;

    while (flags[i] != '\0') {
        if (flags[i] == 'l')
            return (i);
        i++;
    }
    return (-1);
}

void external2_ls (t_var *var)
{
    while (var->x < var->directories) {
        if (look_for_l(var->array_flags) >= 0)
            func_pointer_ls(var, var->array_directory[var->x], 's');
        else
            func_pointer_ls(var, var->array_directory[var->x], 'd');
        var->x++;
    }
}

void external_ls (t_var *var, char *priority)
{
    var->j = 0;
    while (var->array_flags[var->j] != '\0'  &&
    var->x < var->directories) {
        if (priority[var->i] == var->array_flags[var->j] &&
        var->x < var->directories) {
            if (var->array_flags[var->j] == 'd')
                external2_ls(var);
            else
                func_pointer_ls(var, var->array_directory[var->x],
                var->array_flags[var->j]);
        }
        var->j++;
    }
    var->i++;
}

void my_ls(int argc, char **argv)
{
    t_var var;
    ini_variable(&var, argc);
    read_flags_dir(&var, argv);
    char priority[] = "ydltrufgF\0";
    while (var.x < var.directories) {
        var.i = 0;
        while (priority[var.i] != '\0' && var.x < var.directories) {
            external_ls(&var, priority);
        }
        var.x++;
    }
}

int main (int argc, char **argv)
{
    my_ls(argc, argv);
    return (0);
}
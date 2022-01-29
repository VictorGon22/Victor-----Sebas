/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do flags with diff vaues
*/

#include "./../includes/libraries.h"

void fill_flags_ls(calculator *flags)
{
    flags[0].op = 'l';
    flags[0].ptr = &func_l;
    flags[1].op = 'd';
    flags[1].ptr = &func_d;
    flags[2].op = 'w';
    flags[2].ptr = &func_w;
    flags[3].op = 's';
    flags[3].ptr = &func_ld;
    flags[4].op = 'y';
    flags[4].ptr = &func_y;
}

int func_pointer_ls(t_var *var, char *filepath, char type)
{
    int i = 0;

    calculator flags[5];
    fill_flags_ls(flags);
    while (i < 5) {
        if (type == flags[i].op)
            (*(flags[i].ptr))(var, filepath);
        i++;
    }
    return (0);
}

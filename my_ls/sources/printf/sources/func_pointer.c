/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do flags with diff vaues
*/

#include "./../includes/my_printflib.h"
#include "./../includes/struct.h"

void fill_flags2(calculator *flags)
{
    flags[8].op = 'G';
    flags[8].ptr = &func_cg;
    flags[9].op = 'x';
    flags[9].ptr = &func_x;
    flags[10].op = 'X';
    flags[10].ptr = &func_cx;
    flags[11].op = 'p';
    flags[11].ptr = &func_p;
    flags[12].op = 'u';
    flags[12].ptr = &func_u;
    flags[13].op = 'o';
    flags[13].ptr = &func_o;
    flags[14].op = 'S';
    flags[14].ptr = &func_cs;
    flags[15].op = 'B';
    flags[15].ptr = &func_cb;
    flags[16].op = '%';
    flags[16].ptr = &func_module;
}

void fill_flags(calculator *flags)
{
    flags[0].op = 's';
    flags[0].ptr = &func_s;
    flags[1].op = 'c';
    flags[1].ptr = &func_c;
    flags[2].op = 'd';
    flags[2].ptr = &func_i_d;
    flags[3].op = 'i';
    flags[3].ptr = &func_i_d;
    flags[4].op = 'e';
    flags[4].ptr = &func_e;
    flags[5].op = 'E';
    flags[5].ptr = &func_ce;
    flags[6].op = 'f';
    flags[6].ptr = &func_f;
    flags[7].op = 'g';
    flags[7].ptr = &func_g;
    fill_flags2(flags);
}

int func_pointer(va_list list, char type)
{
    int i = 0;
    calculator flags[17];

    fill_flags(flags);
    while (i < 17) {
        if (type == flags[i].op)
            (*(flags[i].ptr))(list);
        i++;
    }
    return (0);
}

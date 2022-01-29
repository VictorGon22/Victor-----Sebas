/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_u(va_list list)
{
    long decimalnum = va_arg(list, long);

    if (decimalnum < 0)
        decimalnum = 4294967295 + (decimalnum + 1);
    my_put_nbr(decimalnum);
}

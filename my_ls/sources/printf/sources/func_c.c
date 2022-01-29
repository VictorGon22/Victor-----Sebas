/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_c(va_list list)
{
    my_putchar((int)va_arg(list, int));
}

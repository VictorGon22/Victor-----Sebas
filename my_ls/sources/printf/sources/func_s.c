/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_s(va_list list)
{
    my_putstr((char *)va_arg(list, char *));
}

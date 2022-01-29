/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_p(va_list list)
{
    char *val = (char *)va_arg(list, char *);

    size_t int_value = (size_t)val;
    my_putstr("0x");
    my_printf("%x", int_value);
}

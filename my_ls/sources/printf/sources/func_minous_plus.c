/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_space(va_list list)
{
    my_putchar(' ');
}

void func_minous(va_list copy)
{
    double var = (double)va_arg(copy, double);
    my_printf("1var:%lf\n", var);
    if (var > 0)
        my_putchar('-');
}

void func_plus(va_list copy)
{
    double var = (double)va_arg(copy, double);
    my_printf("2var:%lf\n", var);
    if (var >= 0)
        my_putchar('+');
}

void func_hashtag(va_list list)
{
    my_putchar('#');
}

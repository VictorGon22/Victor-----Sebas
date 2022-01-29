/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_module(va_list list)
{
    double value = va_arg(list, double);
    my_putchar('%');
}

/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_g(va_list list)
{
    double value = va_arg(list, double);

    if (value < 0.0001 || value > 100000)
        my_printf("%e", value);
    else
        my_printf("%f", value);

}

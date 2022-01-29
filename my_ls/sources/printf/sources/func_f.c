/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void print_type_f (long units, float value, int i)
{
    int n = 0;

    value -= units;
    my_put_nbr(units);
    my_putchar('.');
    while (n != 6) {
        value *= 10;
        my_put_nbr((int)value % 10);
        n++;
    }
}

void func_f(va_list list)
{
    double value = va_arg(list, double);
    int i = 0;
    long units = 0;

    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    units = value;
    print_type_f(units, value, i);
}

/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void print_type_ce (long units, double value, int elevatmenys, int i)
{
    int n = 0;
    int result = 0;

    value -= units;
    while (n++ != 6) {
        value *= 10;
        result += ((int)value % 10);
        result *= 10;
    }
    result /= 10;
    if (((int)value % 10) != 0)
        result += 1;
    my_printf("%d%c%d%c", units, '.', result, 'E');
    if (elevatmenys)
        my_putchar('-');
    else
        my_putchar('+');
    if (i <= 9)
        my_putchar('0');
    my_put_nbr(i);
}

double extra_ce(double value)
{
    if (value < 0) {
        my_putchar('-');
        value *= -1;
    }
    return (value);
}

void func_ce(va_list list)
{
    int i = 0;
    double value = extra_ce(va_arg(list, double));
    long unidades = value;
    int elevatmenys = 0;

    if (unidades < 1) {
        while (unidades <= 0) {
            value *= 10;
            unidades = (long)value;
            elevatmenys = 1;
            i++;
        }
    } else {
        while (unidades < 1 || unidades > 9) {
            value /= 10;
            unidades = (long)value;
            i++;
        }
    }
    print_type_ce(unidades, value, elevatmenys, i);
}

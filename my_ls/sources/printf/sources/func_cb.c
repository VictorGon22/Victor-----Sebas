/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_cb(va_list list)
{
    long number = va_arg(list, long);
    char binari[100];
    int i = 0;

    while (number > 0) {
        binari[i] = (number % 2) + 48;
        number /= 2;
        i++;
    }
    binari[i] = '\0';
    my_putstr(my_revstr(binari));
}

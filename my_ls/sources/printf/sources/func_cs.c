/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-myprintf
** File description:
** function_4.c
*/

#include "./../includes/my_printflib.h"

void func_cs(va_list list)
{
    char *str = (char *)va_arg(list, char *);
    int i = 0;
    int copy;

    while (str[i] != '\0'){
        if (str[i] < 32 || str[i] > 127) {
            my_putchar(92);
            copy = str[i];
            while (copy < 100) {
                copy *= 10;
                my_printf("%c", '0');
            }
            my_printf("%o", str[i]);
        } else
            my_printf("%c", str[i]);
        i++;
    }
}

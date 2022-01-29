/*
** EPITECH PROJECT, 2021
** B-PSU-100-BAR-1-1-bsmyprintf-sebastia.gomez-dolc
** File description:
** disp_stdarg.c
*/

#include "./../includes/my_printflib.h"

int inbase(char character)
{
    char base[] = "GxXpuoSB%scdieEfg +-#";
    int i = 0;

    while (base[i] != '\0') {
        if (character == base[i])
            return (1);
        i++;
    }
    return (0);
}

void my_printf(char *s, ...)
{
    int i = 0;

    va_list list;
    va_list copy;
    va_start(list, s);
    va_start(copy, s);

    while (s[i] != '\0') {
        if (s[i] == '%') {
            i++;
            while (s[i] != '\0' && !isalpha(s[i]) && s[i] != '%') {
                if (inbase(s[i])) {
                    func_pointer(copy, s[i]);
                }
                i++;
            }
            func_pointer(list, s[i]);
        } else
            my_putchar(s[i]);
        i++;
    }
    va_end(list);
    va_end(copy);
}

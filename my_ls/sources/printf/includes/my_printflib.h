/*
** EPITECH PROJECT, 2021
** Sebas-i-victor-print
** File description:
** printlib
*/

#ifndef MY_PRITNFLIB_H_
    #define MY_PRITNFLIB_H_

    #include <stdio.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>

long my_put_nbr(long nb);
void my_putchar(char c);
int my_putstr(char *str);
char *my_revstr (char *str);
int sum_numbers(int n, ...);
int sum_strings_length(int n, ...);
void my_printf(char *s, ...);
void print_type_e (long unidades, double value, int elevatmenys, int i);
void print_type_ce (long unidades, double value, int elevatmenys, int i);
int func_pointer(va_list list, char type);
void func_ce(va_list value);
void func_f(va_list list);
void func_g(va_list list);
void func_cg(va_list list);
void func_x(va_list list);
void func_s(va_list list);
void func_c(va_list list);
void func_i_d(va_list list);
void func_cx(va_list list);
void func_u(va_list list);
void func_o(va_list list);
void func_e(va_list list);
void func_p(va_list list);
void func_cs(va_list list);
void func_cb(va_list list);
void func_module(va_list list);
void func_plus(va_list copy);
void func_minous(va_list copy);
void func_space(va_list copy);
void func_hashtag(va_list copy);

#endif
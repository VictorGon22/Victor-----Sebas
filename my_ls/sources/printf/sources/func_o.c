/*
** EPITECH PROJECT, 2021
** my_putchar
** File description:
** my putchar
*/

#include "./../includes/my_printflib.h"

void func_o(va_list list)
{
    long decimalnum = va_arg(list, long);
    long quotient;
    long carry;
    int j = 0;
    char hexadecimalnum[100];

    if (decimalnum != 0) {
        if (decimalnum < 0)
            decimalnum = 4294967295 + (decimalnum + 1);
        quotient = decimalnum;
        while (quotient != 0) {
            carry = quotient % 8;
            if (carry < 8)
                hexadecimalnum[j++] = 48 + carry;
            quotient = quotient / 8;
        }
    } else
        hexadecimalnum[0] = '0';
    hexadecimalnum[j] = '\0';
    my_putstr(my_revstr(hexadecimalnum));
}

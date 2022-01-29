/*
** EPITECH PROJECT, 2021
** struct.h
** File description:
** structures to work with
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    #include "./my_printflib.h"

    typedef struct do_op
    {
        char op;
        void (*ptr)(va_list list);
    } calculator;

#endif

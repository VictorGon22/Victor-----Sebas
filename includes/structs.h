/*
** EPITECH PROJECT, 2021
** sebastia header
** File description:
** fgfghgf
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_
    #include <time.h>
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>

    typedef struct s_var {
        int argc;
        char **argv;
        char **envp;
        struct s_info_files *file;
        int counter_op;
    } t_var;

    typedef struct do_op {
        char *op;
        void (*ptr)(t_var *var, char *params);
    } calculator;

        typedef struct s_info_files {
        char *name;
        char *info;
        char *env;
        struct s_info_files *next;

    } t_info_files;
#endif

/*
** EPITECH PROJECT, 2021
** victor header
** File description:
** lib my_hunterexercise
*/

#ifndef LIBRAY_H_
    #define LIBRAY_H_
    #include <string.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <stddef.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <ctype.h>
    #include "./structs.h"
    #include <limits.h>
    #include<stdio.h>
    #include<unistd.h>
    #include<errno.h>
    #include<sys/types.h>
    #include<sys/stat.h>
    #include<fcntl.h>
    #include <sys/types.h>
    #include <sys/wait.h>


void my_itoa(long i, char *string);
void *my_memset(void *s, int c, int n);
void *my_calloc(int nmemb, int size);
void revstr(char *str1);
char *my_charcat(char *dest, char src);
int my_getnbr(char const *str);
int my_nbrlen(int nb);
char *ext_my_return_char(int nb, char *str, int neg);
char *my_return_char(int nb);
char *my_revstr(char *str);
char *my_strcat(char *dest, char *src);
int my_strcmp(const char *s1, const char *s2);
char *my_strdup(char *str);
char *my_strcpy(char *destination, char *source);
int my_strlen(char const *str);
void my_putchar(char letter);
char **get_env_params(char *str);
long my_put_nbr(long nb);

//MAIN
char **paths(char *str);
char *exercise_one(t_var *var);
void print_arg(char ** arg);
void create_new(t_info_files *file, char *envp);

//ARRAY_FUNCTIONS
void change_value_linked(t_var *var, char *value, char *name);
void supres_value_linked(t_var *var, char *name);
int find_str_array(t_var *var, char *to_find);
int find_in_str(char *str, char *to_find);
char *find_func(char **paths, char *function);
int find_in_linked(t_var *var, char *name);

//ENV_FUNCTIONS
void printenv_func(t_var *var, char *params);
void setenv_func(t_var *var, char *params);
void unsetenv_func(t_var *var, char *params);

void try_execute(t_var *var, char *params, char *type);

void save_envplinked(t_info_files *file, char **envp);
char *get_path(t_var *var);
int status(char *str);
char *get_command(char *str);
char *get_params(char *str);
void my_pwdfunc(t_var *var, char *params);
void exit_func(t_var *var, char *params);
char *pwd_func();
void cd_func(t_var *var, char *path);
void my_lsfunc(t_var *var, char *params);
void lsfunc(t_var *var, char *params);
void pwdfunc(t_var *var, char *params);

void print_arg(char ** arg);
char *get_command(char *str);
void type_comands(calculator *flags);
int func_pointer(t_var *var, char *params, char *type);
int get_line_function(t_var *var);
char *pwd_func();
void cd_func(t_var *var, char *path);
void my_putstr(char const *str);

#endif

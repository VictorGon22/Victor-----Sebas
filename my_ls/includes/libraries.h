/*
** EPITECH PROJECT, 2022
** Sebas
** File description:
** myls.h
*/

#ifndef LIBRARIES_H_
    #define LIBRARIES_H_
    #include "./../includes/structs.h"
    #include <stdio.h>
    #include <unistd.h>
    #include <stdarg.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdlib.h>
    #include <string.h>
    #include <dirent.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <time.h>
    #include <pwd.h>
    #include <grp.h>
    #include "./structs.h"

//ERROR HANDLING
int error_num_elements(int num_flags, int num_directories, int argc);
int error_flags (char *flags);
int error_directories (char *dir);
void errormanager_general (t_var *var);
void errormanager_directories (char *filepath);

// FLAGS
void func_y(t_var *var2, char *filepath);
void func_l(t_var *var2, char *filepath);
void func_ld(t_var *var2, char *filepath);
void func_d(t_var *var2, char *filepath);
void func_w(t_var *var2, char *filepath);

//FUNCTION POINTERS
void fill_flags_ls(calculator *flags);
int func_pointer_ls(t_var *var, char *filepath, char type);

//INFO FILE
char *change_date(char *str);
char *date(char *name, char *fullpath);
long int raw_date(char *name, char *fullpath);
int total(char *name, char *fullpath);
int link_counts(char *name, char *fullpath);

//INFO FILE2
char *user_name(char *name, char *fullpath);
char *goup_name(char *name, char *fullpath);
int size(char *name, char *fullpath);
char *permisions(char *name, char *fullpath);

// MANAGE SORT
int find_in_array(char *array, char value);
void manage_sort_date(int rev, t_info_files *file);
void manage_sort_alpha(int rev, t_info_files *file);
void manage_sort(t_var *var,  t_info_files *file);


//MY_LS
int look_for_l(char *flags);
void external2_ls (t_var *var);
void external_ls (t_var *var, char *priority);
void my_ls(int argc, char **argv);
int main (int argc, char **argv);

//MY_LS2
void save_flags_dir (t_var *var, int i, char **argv);
void ini_variable(t_var *var, int argc);
void read_flags_dir(t_var *var, char **argv);
char *func_fullpath(char *filepath, char *name, char *fullpath);

//SAVE INFO
void printlinked_d(t_info_files *file);
void printlinked(t_info_files *file);
void printlinked_noflags(t_info_files *file);
t_info_files *ini_new_info_files(char *name, char *filepath);
void create_new(t_info_files *file, char *filepath, char *name);

//SORT LINKED
char *str_to_lower(char *str);
int str_value_cmp(char *s1, char *s2);
void func_save_temp(t_info_files *save_tmp, t_info_files *link);
void save_on_pointer(t_info_files *i, t_info_files *temp);
int find_in_array(char *array, char value);

//SORT LINKED 2
void sort_date_linked_reversed(t_info_files *linked);
void sort_date_linked(t_info_files *linked);
void sort_alpha_linked_reversed(t_info_files *linked);
void sort_alpha_linked(t_info_files *linked);
void sort_size_linked(t_info_files *linked);

//Basic functions
char *my_strcat(char *dest, char const *src);
int my_getnbr(char const *str);
void my_putstr(char const *str);
int my_strlen(char const *str);
long my_put_nbr(long nb);
void my_putchar(char c);
int my_getnbr(char const *str);
char *my_strdup(char *str);
char *my_strcpy(char *dest , char const *src);
void my_printf(char *s, ...);


#endif
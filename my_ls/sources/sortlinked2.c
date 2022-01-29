/*
** EPITECH PROJECT, 2021
** SORT2
** File description:
** FUNCTIONS TO SORT THE LINKED2
*/

#include "./../includes/libraries.h"

void sort_date_linked_reversed(t_info_files *linked)
{
    t_info_files *i = linked->next;
    t_info_files *j = linked->next;
    t_info_files *save_tmp = malloc(sizeof(t_info_files));

    while (i != NULL) {
        j = i;
        while (j != NULL) {
            if (i->raw_date > j->raw_date) {
                func_save_temp(save_tmp, i);
                save_on_pointer(i, j);
                save_on_pointer(j, save_tmp);
            }
            j = j->next;
        }
        i = i->next;
    }
    free(save_tmp);
}

void sort_date_linked(t_info_files *linked)
{
    t_info_files *i = linked->next;
    t_info_files *j = linked->next;
    t_info_files *save_tmp = malloc(sizeof(t_info_files));

    while (i != NULL) {
        j = i;
        while (j != NULL) {
            if (i->raw_date < j->raw_date) {
                func_save_temp(save_tmp, i);
                save_on_pointer(i, j);
                save_on_pointer(j, save_tmp);
            }
            j = j->next;
        }
        i = i->next;
    }
    free(save_tmp);
}

void sort_alpha_linked_reversed(t_info_files *linked)
{
    t_info_files *i = linked->next;
    t_info_files *j = linked->next;
    t_info_files *save_tmp = malloc(sizeof(t_info_files));
    while (i != NULL) {
        j = i;
        while (j != NULL) {
            if (str_value_cmp(j->name, i->name) == 1) {
                func_save_temp(save_tmp, i);
                save_on_pointer(i, j);
                save_on_pointer(j, save_tmp);
            }
            j = j->next;
        }
        i = i->next;
    }
    free(save_tmp);
}

void sort_alpha_linked(t_info_files *linked)
{
    t_info_files *i = linked->next;
    t_info_files *j = linked->next;
    t_info_files *save_tmp = malloc(sizeof(t_info_files));
    while (i != NULL) {
        j = i;
        while (j != NULL) {
            if (str_value_cmp(i->name, j->name) == 1) {
                func_save_temp(save_tmp, i);
                save_on_pointer(i, j);
                save_on_pointer(j, save_tmp);
            }
            j = j->next;
        }
        i = i->next;
    }
    free(save_tmp);
}

void sort_size_linked(t_info_files *linked)
{
    t_info_files *i = linked->next;
    t_info_files *j = linked->next;
    t_info_files *save_tmp = malloc(sizeof(t_info_files));

    while (i != NULL) {
        j = i;
        while (j != NULL) {
            if (i->filesize < j->filesize) {
                func_save_temp(save_tmp, i);
                save_on_pointer(i, j);
                save_on_pointer(j, save_tmp);
            }
            j = j->next;
        }
        i = i->next;
    }
    free(save_tmp);
}
/*
** EPITECH PROJECT, 2021
** MAN SORT
** File description:
** maneger  TO SORT THE LINKED
*/

#include "./../includes/libraries.h"

int find_in_array(char *array, char value)
{
    int i = 0;

    while (array[i] != '\0') {
        if (array[i] == value)
            return (1);
        i++;
    }
    return (0);
}

void manage_sort_date(int rev, t_info_files *file)
{
    if (rev)
        sort_date_linked_reversed(file);
    else
        sort_date_linked(file);
}

void manage_sort_alpha(int rev, t_info_files *file)
{
    if (rev == 1)
        sort_alpha_linked_reversed(file);
    else
        sort_alpha_linked(file);
}

void manage_sort(t_var *var,  t_info_files *file)
{
    int reversed = 0;
    reversed = find_in_array(var->array_flags, 'r');
    if (find_in_array(var->array_flags, 'U') != 1)
    {
        if (find_in_array(var->array_flags, 't') == 1)
            manage_sort_date(reversed, file);
        else
            manage_sort_alpha(reversed, file);
    }
    else
        sort_size_linked(file);
}
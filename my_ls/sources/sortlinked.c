/*
** EPITECH PROJECT, 2021
** SORT
** File description:
** FUNCTIONS TO SORT THE LINKED
*/

#include "./../includes/libraries.h"

char *str_to_lower(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
        i++;
    }
    return (str);
}

int str_value_cmp(char *s1, char *s2)
{
    int i = 0;
    char *str1 = str_to_lower(s1);
    char *str2 = str_to_lower(s2);

    while (str1[i] == str2[i] &&
    str1[i] != '\0' && str2[i] != '\0')
        i++;
    if (str1[i] > str2[i])
        return (1);
    return (0);
}

void func_save_temp(t_info_files *save_tmp, t_info_files *link)
{
    *save_tmp = *link;
    save_tmp->next = NULL;
}

void save_on_pointer(t_info_files *i, t_info_files *temp)
{
    t_info_files *next_ptr = i->next;
    *i = *temp;
    i->next = next_ptr;
}

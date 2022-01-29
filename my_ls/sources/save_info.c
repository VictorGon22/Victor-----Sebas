/*
** EPITECH PROJECT, 2021
** do_op.c
** File description:
** do flags with diff vaues
*/

#include "./../includes/libraries.h"
#include "./../includes/structs.h"

void printlinked_d(t_info_files *file)
{
    t_info_files *tmp = malloc(sizeof(t_info_files));
    tmp = file->next;

    while (tmp != NULL) {
        my_printf("%s ", tmp->permisions);
        my_printf("%i ", tmp->linkcount);
        my_printf("%s ", tmp->owner);
        my_printf("%s ", tmp->group);
        my_printf("%i ", tmp->filesize);
        my_printf("%s ", tmp->date);
        my_printf("%s\n", tmp->name);
        tmp = tmp->next;
    }
    free(tmp);
}

void printlinked(t_info_files *file)
{
    t_info_files *tmp = file->next;
    int total = 0;

    while (tmp != NULL) {
        total += (tmp->total);
        tmp = tmp->next;
    }
    tmp = file->next;
    my_printf("total %d\n", total / 2);
    while (tmp != NULL) {
        my_printf("%s ", tmp->permisions);
        my_printf("%i ", tmp->linkcount);
        my_printf("%s ", tmp->owner);
        my_printf("%s ", tmp->group);
        my_printf("%i ", tmp->filesize);
        my_printf("%s ", tmp->date);
        my_printf("%s\n", tmp->name);
        tmp = tmp->next;
    }
    free(tmp);
}

void printlinked_noflags(t_info_files *file)
{
    t_info_files *tmp = file->next;

    while (tmp != NULL) {
        my_printf("%s\n", tmp->name);
        tmp = tmp->next;
    }
    free(tmp);
}

t_info_files *ini_new_info_files(char *name, char *filepath)
{
    t_info_files *file = malloc(sizeof(t_info_files) * 1);

    if (file == NULL)
        my_printf("error\n");
    file->name = my_strdup(name);
    file->permisions = permisions(name, filepath);
    file->date = date(name, filepath);
    file->raw_date = raw_date(name, filepath);
    file->filesize = size(name, filepath);
    file->linkcount = link_counts(name, filepath);
    file->group = goup_name(name, filepath);
    file->owner = user_name(name, filepath);
    file->total = total(name, filepath);
    file->next = NULL;
    return file;
}

void create_new(t_info_files *file, char *filepath, char *name)
{
    t_info_files *tmp = file;

    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = ini_new_info_files(name, filepath);
}

/*
** EPITECH PROJECT, 2021
** INFO
** File description:
** recopila all the information
*/

#include "./../includes/libraries.h"

char *change_date(char *str)
{
    char *modified = malloc(sizeof(char) * 13);
    int i = 4;
    int n = 0;

    while (i != 16) {
        modified[n] = str[i];
        i++;
        n++;
    }
    modified[n] = '\0';
    return (modified);
}

char *date(char *name, char *fullpath)
{
    int mtime;
    struct stat fileStat;
    stat(fullpath, &fileStat);
    return (change_date(ctime(&fileStat.st_mtime)));
}

long int raw_date(char *name, char *fullpath)
{
    long int mtime;
    struct stat fileStat;
    stat(fullpath, &fileStat);
    mtime = fileStat.st_mtime;
    return (fileStat.st_mtime);
}

int total(char *name, char *fullpath)
{
    struct stat fileStat;
    stat(fullpath, &fileStat);
    return (fileStat.st_blocks);
}

int link_counts(char *name, char *fullpath)
{
    struct stat fileStat;

    stat(fullpath, &fileStat);
    return (fileStat.st_nlink);
}

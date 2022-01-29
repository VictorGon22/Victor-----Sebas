/*
** EPITECH PROJECT, 2021
** INFO_FILE
** File description:
** recopilation all the information
*/
#include "./../includes/libraries.h"

char *user_name(char *name, char *fullpath)
{
    struct stat fileStat;
    struct passwd *pw = getpwuid(fileStat.st_uid);
    return (pw->pw_name);
}

char *goup_name(char *name, char *fullpath)
{
    struct stat fileStat;
    struct group  *gr;

    gr = getgrgid(fileStat.st_gid);
    return (gr->gr_name);
}

int size(char *name, char *fullpath)
{
    struct stat fileStat;

    return (fileStat.st_size);
}

char *permisions(char *name, char *fullpath)
{
    char *temp = malloc(sizeof(char) * 11);
    struct stat fileStat;

    stat(fullpath, &fileStat);
    temp[0] = (S_ISDIR(fileStat.st_mode)) ? 'd' : '-';
    temp[1] = (fileStat.st_mode & S_IRUSR) ? 'r' : '-';
    temp[2] = (fileStat.st_mode & S_IWUSR) ? 'w' : '-';
    temp[3] = (fileStat.st_mode & S_IXUSR) ? 'x' : '-';
    temp[4] = (fileStat.st_mode & S_IRGRP) ? 'r' : '-';
    temp[5] = (fileStat.st_mode & S_IWGRP) ? 'w' : '-';
    temp[6] = (fileStat.st_mode & S_IXGRP) ? 'x' : '-';
    temp[7] = (fileStat.st_mode & S_IROTH) ? 'r' : '-';
    temp[8] = (fileStat.st_mode & S_IWOTH) ? 'w' : '-';
    temp[9] = (fileStat.st_mode & S_IXOTH) ? 'x' : '-';
    temp[10] = '\0';
    return temp;
}
/*
** EPITECH PROJECT, 2021
** file_to_str.c
** File description:
** take a file and return a str
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

#include "defender.h"
#include "tower.h"

char *file_to_str(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    stat(filepath, &sb);
    int bytes = sb.st_size;
    char *cpy = malloc(sizeof(char) * bytes + 1);
    int r = read(fd, cpy, bytes);

    cpy[bytes] = '\0';
    if (fd <= 0 || r <= 0 || cpy == NULL)
        return (NULL);
    close(fd);
    return (cpy);
}
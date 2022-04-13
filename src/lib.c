/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** lib
*/

#include "defender.h"
#include "tower.h"

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
        len++;
    }
    return (len);
}

char *my_revstr(char *str)
{
    int p;
    int f = my_strlen(str) - 1;

    for (p = 0; p < f; f--, p++) {
        char e = str[p];
        str[p] = str[f];
        str[f] = e;
    }
    return str;
}

char *my_itoa_bis(int nb, int cmp, int nega)
{
    int mod = 0;
    char *str;

    str = malloc(sizeof(char) * (cmp + + nega + 1));
    if (nega == 1)
        str[0] = '-';
    for (int i = nega;i < cmp; i++) {
        if (nb >= 10) {
            mod = (nb % 10);
            nb = ((nb - mod) / 10);
            str[i] = (48 + mod);
        }
        else
            str[i] = 48 + (nb % 10);
    }
    str[cmp] = '\0';
    return (str);
}

char *my_itoa(int nb)
{
    char *str;
    int nega = 0;
    int cmp = 0;

    nega = (nb < 0) ? 1: 0;
    nb *= (nb < 0) ? -1: 1;

    if (nb == 0) {
        str = malloc(sizeof(char) * 2);
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    for (int compt = nb; compt > 0; compt /= 10) {
        cmp += 1;
    }
    str = my_itoa_bis(nb, cmp, nega);
    my_revstr(str);
    return (str);
}
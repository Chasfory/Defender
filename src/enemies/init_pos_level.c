/*
** EPITECH PROJECT, 2021
** init_pos_level.c
** File description:
** create a unique position for each level
*/

#include <SFML/System.h>

sfVector2f init_pos_level(int level)
{
    sfVector2f pos;

    if (level == 1) {
        pos.x = 400;
        pos.y = 0;
    }
    if (level == 2) {
        pos.x = 500;
        pos.y = 500;
    }
    if (level == 3) {
        pos.x = 500;
        pos.y = 500;
    }
    return (pos);
}
/*
** EPITECH PROJECT, 2021
** moves_enemies.c
** File description:
** move the enemies on the map
*/

#include "enemies.h"

void last_move(enemies_t *enemies)
{
    if (enemies->pos_e.y < 1000 && enemies->futur == 4) {
        enemies->pos_e.y += 2;
        if (enemies->pos_e.y == 1000)
            enemies->futur = 5;
    }
}

void move_level1(enemies_t *enemies)
{
    if (enemies->pos_e.y < 520 && enemies->futur == 0) {
        enemies->pos_e.y += 2;
        if (enemies->pos_e.y == 510)
            enemies->futur = 1;
    }
    if (enemies->futur == 1 && enemies->pos_e.x < 750) {
        enemies->pos_e.x += 2;
        if (enemies->pos_e.x == 750)
            enemies->futur = 2;
    }
    if (enemies->futur == 2 && enemies->pos_e.y > 200) {
        enemies->pos_e.y -= 2;
        if (enemies->pos_e.y == 200)
            enemies->futur = 3;
    }
    if (enemies->pos_e.x < 1100 && enemies->futur == 3) {
        enemies->pos_e.x += 2;
        if (enemies->pos_e.x == 1100)
            enemies->futur = 4;
    }
    last_move(enemies);
}
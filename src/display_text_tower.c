/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_text_tower
*/

#include "tower.h"

void display_text_tower(game_t *struct_game,
                    button_finish_t *every_button, int i)
{
    if (i == 0) {
        display_text_tower_1(struct_game, every_button, i);
    }
    if (i == 1) {
        display_text_tower_2(struct_game, every_button, i);
    }
    if (i == 2) {
        display_text_tower_3(struct_game, every_button, i);
    }
    if (i == 3) {
        display_text_tower_4(struct_game, every_button, i);
    }
}
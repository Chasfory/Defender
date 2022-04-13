/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** funct_free_bis
*/

#include "defender.h"
#include "tower.h"

void free_struct_next(game_t struct_game)
{
    sfText_destroy(struct_game.counter.score_level);
    sfText_destroy(struct_game.money.money_level);
    sfTexture_destroy(struct_game.cursor.cursor);
    sfSprite_destroy(struct_game.cursor.my_cursor);
    sfTexture_destroy(struct_game.life.texture);
    sfSprite_destroy(struct_game.life.sprite);
    for (int l = 0; l < 38; l++) {
        free(struct_game.map.level_1[l]);
    }
    free(struct_game.map.level_1);
}
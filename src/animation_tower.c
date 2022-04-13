/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** animation_tower
*/

#include "tower.h"

void level_1_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button)
{
    for (int i = 0; i < 5; i++) {
        level_tower_1(tower_position[0], i);
        level_tower_2(tower_position[0], i, struct_game);
        level_tower_3(tower_position[0], i);
        level_tower_4(tower_position[0], i);
    }
}

void level_2_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button)
{
    for (int i = 0; i < 8; i++) {
        level_tower_1(tower_position[1], i);
        level_tower_2(tower_position[1], i, struct_game);
        level_tower_3(tower_position[1], i);
        level_tower_4(tower_position[1], i);
    }
}

void level_3_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button)
{
    for (int i = 0; i < 17; i++) {
        level_tower_1(tower_position[2], i);
        level_tower_2(tower_position[2], i, struct_game);
        level_tower_3(tower_position[2], i);
        level_tower_4(tower_position[2], i);
    }
}
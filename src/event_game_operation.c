/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** event_game_operation
*/

#include "defender.h"
#include "tower.h"

void every_button_display_plus(button_finish_t *every_button,
    game_t *struct_game, tower_map_t *tower_position, int i)
{
    every_button[i].position.x =
    every_button[i].position.x +
    tower_position[struct_game->j].post_tower.x;
    every_button[i].position.y =
    every_button[i].position.y +
    tower_position[struct_game->j].post_tower.y;
}

void every_button_display_minus(button_finish_t *every_button,
    game_t *struct_game, tower_map_t *tower_position, int i)
{
    every_button[i].position.x =
    every_button[i].position.x -
    tower_position[struct_game->j].post_tower.x;
    every_button[i].position.y =
    every_button[i].position.y -
    tower_position[struct_game->j].post_tower.y;
}
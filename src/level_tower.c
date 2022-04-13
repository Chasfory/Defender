/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** level_tower
*/

#include "tower.h"

void level_tower_1(tower_map_t *tower_position, int i)
{
    if (tower_position[i].tower_level == TOWER_1_1) {
        if (tower_position[i].tower_finish_level[0].rect.left < 600) {
        tower_position[i].tower_finish_level[0].rect.left += 67;
        } else {
            tower_position[i].tower_finish_level[0].rect.left = 66;
        }
    }
}

void level_tower_2(tower_map_t *tower_position, int i, game_t *struct_game)
{
    if (tower_position[i].tower_level == TOWER_2_1) {
        if (tower_position[i].tower_finish_level[1].rect.left < 580) {
        tower_position[i].tower_finish_level[1].rect.left += 68;
        } else {
            tower_position[i].tower_finish_level[1].rect.left = 63;
        }
        struct_game->money.money += 10;
    }
}

void level_tower_3(tower_map_t *tower_position, int i)
{
    if (tower_position[i].tower_level == TOWER_3_1) {
        if (tower_position[i].tower_finish_level[2].rect.left < 600) {
        tower_position[i].tower_finish_level[2].rect.left += 68;
        } else {
            tower_position[i].tower_finish_level[2].rect.left = 65;
        }
    }
}

void level_tower_4(tower_map_t *tower_position, int i)
{
    if (tower_position[i].tower_level == TOWER_4_1) {
        if (tower_position[i].tower_finish_level[3].rect.left < 250) {
        tower_position[i].tower_finish_level[3].rect.left += 66;
        }
        else if (tower_position[i].tower_finish_level[3].rect.left < 600) {
            tower_position[i].tower_finish_level[3].rect.left += 70;
        } else {
            tower_position[i].tower_finish_level[3].rect.left = 65;
        }
    }
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_LEVEL_3_tower
*/

#include "defender.h"
#include "tower.h"

void handling_level_3_tower(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click, tower_map_t *tower_position)
{
    for (int i = 0; i < nbr_tower[2]; i++) {
        if (((mouse_click.x <= (int) (tower_position[i].post_tower.x + 34) &&
        (mouse_click.x >= (int) tower_position[i].post_tower.x))) &&
        ((mouse_click.y >= (int) tower_position[i].post_tower.y) &&
        (mouse_click.y <= (int) tower_position[i].post_tower.y + 29))) {
            if (tower_position[i].tower_level == NO_TOWER &&
            tower_position[i].tower_in_game == DIS_MENU_TOWER) {
                tower_position[i].tower_in_game = 0;
            }
            else if (tower_position[i].tower_level != NO_TOWER &&
            tower_position[i].tower_in_game == DIS_MENU_LEVEL_UP) {
                tower_position[i].tower_in_game = 0;
            } else {
                handling_level_tower_opt(tower_position, i);
            }
        }
    }
}
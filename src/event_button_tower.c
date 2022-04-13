/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** event_button_tower
*/

#include "defender.h"
#include "tower.h"

void event_button_menu_tower_3(game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position,
    sfVector2i mouse_click)
{
    if (struct_game->level == 3) {
        for (int l = 0; l < nbr_tower[2]; l++) {
            if (((mouse_click.x <= (int)
            (tower_position[2][l].post_tower.x + 32) &&
            (mouse_click.x >= (int) tower_position[2][l].post_tower.x))) &&
            ((mouse_click.y >= (int) tower_position[2][l].post_tower.y) &&
            (mouse_click.y <= (int) tower_position[2][l].post_tower.y + 29))) {
                post_tower(every_button, struct_game, mouse_click,
                tower_position[2]);
            }
        }
    }
}

void event_button_menu_tower_2(game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position,
    sfVector2i mouse_click)
{
    if (struct_game->level == 2) {
        for (int j = 0; j < nbr_tower[1]; j++) {
            if (((mouse_click.x <= (int)
            (tower_position[1][j].post_tower.x + 32) &&
            (mouse_click.x >= (int) tower_position[1][j].post_tower.x))) &&
            ((mouse_click.y >= (int) tower_position[1][j].post_tower.y) &&
            (mouse_click.y <= (int) tower_position[1][j].post_tower.y + 29))) {
                post_tower(every_button, struct_game, mouse_click,
                tower_position[1]);
            }
        }
    }
    event_button_menu_tower_3(struct_game, every_button,
    tower_position, mouse_click);
}

void event_button_menu_tower(game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position,
    sfVector2i mouse_click)
{
    if (struct_game->level == 1) {
        for (int i = 0; i < nbr_tower[0]; i++) {
            if (((mouse_click.x <= (int)
            (tower_position[0][i].post_tower.x + 32) && (mouse_click.x >= (int)
            tower_position[0][i].post_tower.x))) &&
            ((mouse_click.y >= (int) tower_position[0][i].post_tower.y) &&
            (mouse_click.y <= (int) tower_position[0][i].post_tower.y + 30))) {
                post_tower(every_button, struct_game,
                mouse_click, tower_position[0]);
            }
        }
    }
    event_button_menu_tower_2(struct_game, every_button, tower_position,
    mouse_click);
}
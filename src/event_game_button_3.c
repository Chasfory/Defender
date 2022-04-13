/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** event_game_button_3
*/

#include "defender.h"
#include "tower.h"

void event_3_bis(game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position,
    sfVector2i mouse_click)
{
    if (tower_position[2][struct_game->j].tower_in_game == DIS_MENU_LEVEL_UP) {
        for (int i = 0; i < 2; i++) {
        every_button_display_plus(every_button[DIS_MENU_LEVEL_UP], struct_game,
        tower_position[2], i);
            if (((mouse_click.x <= (int)
            (every_button[DIS_MENU_LEVEL_UP][i].position.x + 70) &&
            (mouse_click.x >= (int)
            every_button[DIS_MENU_LEVEL_UP][i].position.x))) &&
            ((mouse_click.y >= (int)
            every_button[DIS_MENU_LEVEL_UP][i].position.y) &&
            (mouse_click.y <= (int)
            every_button[DIS_MENU_LEVEL_UP][i].position.y + 70))) {
                menu_button(every_button, struct_game, mouse_click,
                tower_position);
            }
        every_button_display_minus(every_button[DIS_MENU_LEVEL_UP],
        struct_game, tower_position[2], i);
        }
    }
}

void event_button_menu_level_3(game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position,
    sfVector2i mouse_click)
{
    if (tower_position[2][struct_game->j].tower_in_game == DIS_MENU_TOWER) {
        for (int i = 0; i < 4; i++) {
        every_button_display_plus(every_button[DIS_MENU_TOWER], struct_game,
        tower_position[2], i);
            if (((mouse_click.x <= (int)
            (every_button[DIS_MENU_TOWER][i].position.x + 70) &&
            (mouse_click.x >= (int)
            every_button[DIS_MENU_TOWER][i].position.x))) &&
            ((mouse_click.y >= (int)
            every_button[DIS_MENU_TOWER][i].position.y) &&
            (mouse_click.y <= (int)
            every_button[DIS_MENU_TOWER][i].position.y + 70))) {
                menu_button(every_button, struct_game, mouse_click,
                tower_position);
            }
            every_button_display_minus(every_button[DIS_MENU_TOWER],
            struct_game, tower_position[2], i);
        }
    } else
        event_3_bis(struct_game, every_button, tower_position, mouse_click);
}
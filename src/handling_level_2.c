/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_LEVEL_2
*/

#include "defender.h"
#include "tower.h"

void handling_level_2(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t *tower_position)
{
    int event_button = handling_level_click(struct_game, every_button,
                        mouse_click);

    if (event_button == 0) {
        play_music_button(struct_game);
        struct_game->music.opt = 1;
        struct_game->script = DIS_MENU_PAUSE;
    }
    for (int i = 0; i < 8; i++) {
        if (tower_position[i].tower_in_game == DIS_MENU_TOWER) {
            handling_level_menus_tower(mouse_click, every_button,
            &tower_position[i], struct_game);
        }
        else if (tower_position[i].tower_in_game == DIS_MENU_LEVEL_UP) {
            handling_level_menus_level_up(mouse_click, every_button,
            &tower_position[i], struct_game);
        }
    }
}
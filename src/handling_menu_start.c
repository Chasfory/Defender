/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_menu_start
*/

#include "defender.h"
#include "tower.h"

void handling_menu_start_opt(int event_button, game_t *struct_game)
{
    if (event_button == 1) {
        struct_game->script = LEVEL_2;
        play_music_fond(struct_game);
        struct_game->level = 2;
    }
    if (event_button == 2) {
        struct_game->script = LEVEL_3;
        play_music_fond(struct_game);
        struct_game->level = 3;
    }
    if (event_button == 3) {
        struct_game->script = DIS_MENU_PRINCIPAL;
    }
}

void handling_menu_start(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click)
{
    int event_button = 0;

    for (int i = 0; i < nbr_button[struct_game->script]; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
            (mouse_click.x >= (int) every_button[i].position.x))) &&
            ((mouse_click.y >= (int) every_button[i].position.y) &&
            (mouse_click.y <= (int) every_button[i].position.y + 120))) {
                event_button = i;
            }
    }
    if (event_button == 0) {
        struct_game->script = LEVEL_1,
        play_music_fond(struct_game);
        struct_game->level = 1;
    }
    handling_menu_start_opt(event_button, struct_game);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_menu_pause
*/

#include "defender.h"
#include "tower.h"

void handling_menu_pause_opt(int event_button, game_t *struct_game)
{
    if (event_button == 1) {
        struct_game->script = DIS_MENU_PRINCIPAL;
        struct_game->level = 0;
    }
    if (event_button == 2) {
        struct_game->script = DIS_MENU_EXIT;
    }
    if (event_button == 3) {
        struct_game->music.opt = 0;
        if (struct_game->level == 1) {
            struct_game->script = LEVEL_1;
            play_music_fond(struct_game);
        } else if (struct_game->level == 2) {
            struct_game->script = LEVEL_2;
            play_music_fond(struct_game);
        } else {
            struct_game->script = LEVEL_3;
            play_music_fond(struct_game);
        }
    }
}

void handling_menu_pause(button_finish_t *every_button, game_t *struct_game,
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
        struct_game->script = DIS_MENU_OPTION;
    }
    handling_menu_pause_opt(event_button, struct_game);
}
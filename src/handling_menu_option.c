/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_menu_option
*/

#include "defender.h"
#include "tower.h"

void handling_menu_option_opt(button_finish_t *every_button,
                        game_t *struct_game, int event_button)
{
    if (event_button == 1) {
        if (struct_game->status_son == 0) {
            struct_game->status_son = 1;
            struct_game->music.effect = 1;
        } else {
            struct_game->status_son = 0;
            struct_game->music.effect = 0;
        }
    }
    if (event_button == 2) {
        if (struct_game->status_music == 0) {
            struct_game->status_music = 1;
            struct_game->music.music_play = 1;
        } else {
            struct_game->status_music = 0;
            struct_game->music.music_play = 0;
        }
    }
}

void handling_menu_option(button_finish_t *every_button, game_t *struct_game,
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
        if (struct_game->level != 0) {
            struct_game->script = DIS_MENU_PAUSE;
        } else {
            struct_game->script = DIS_MENU_PRINCIPAL;
        }
    }
    handling_menu_option_opt(every_button, struct_game, event_button);
}
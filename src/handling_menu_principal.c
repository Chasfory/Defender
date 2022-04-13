/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_menu_principal
*/

#include "defender.h"
#include "tower.h"

void handling_menu_principal_opt(int event_button, game_t *struct_game)
{
    if (event_button == 2) {
        struct_game->script = DIS_MENU_OPTION;
    }
    if (event_button == 3) {
        struct_game->script = DIS_MENU_HELP;
    }
}

void handling_menu_principal(button_finish_t *every_button,
                            game_t *struct_game, sfVector2i mouse_click)
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
        struct_game->script = DIS_MENU_START;
    }
    if (event_button == 1) {
        struct_game->script = DIS_MENU_EXIT;
    }
    handling_menu_principal_opt(event_button, struct_game);
}
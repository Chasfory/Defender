/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_gameplay
*/

#include "tower.h"
#include "defender.h"

void display_gameplay_four(game_t *struct_game, button_finish_t **every_button,
                    menu_finish_t *menu_finish, sfVector2i mouse_click)
{
    if (struct_game->script == DIS_MENU_START) {
        display_menu_start(struct_game, every_button[DIS_MENU_START],
        menu_finish[0], mouse_click);
    }
    if (struct_game->script == DIS_MENU_EXIT) {
        sfRenderWindow_close(struct_game->window);
    }
}

void display_gameplay_three(game_t *struct_game,
    button_finish_t **every_button, menu_finish_t *menu_finish,
    sfVector2i mouse_click)
{
    if (struct_game->script == DIS_MENU_GAME_OVER) {
        display_menu_game_over(struct_game, every_button[DIS_MENU_GAME_OVER],
        menu_finish[0], mouse_click);
    }
    if (struct_game->script == DIS_MENU_WIN) {
        display_menu_win(struct_game, every_button[DIS_MENU_WIN],
        menu_finish[0], mouse_click);
    } else {
        display_gameplay_four(struct_game, every_button, menu_finish,
        mouse_click);
    }
}

void display_gameplay_bis(game_t *struct_game, button_finish_t **every_button,
                    menu_finish_t *menu_finish, sfVector2i mouse_click)
{
    if (struct_game->script == DIS_MENU_HELP) {
        display_menu_help(struct_game, every_button[DIS_MENU_HELP],
        menu_finish[0], mouse_click);
    }
    if (struct_game->script == DIS_MENU_PAUSE) {
        display_menu_pause(struct_game, every_button[DIS_MENU_PAUSE],
        menu_finish[0], mouse_click);
    } else {
        display_gameplay_three(struct_game, every_button, menu_finish,
        mouse_click);
    }
}

void display_gameplay(game_t *struct_game, button_finish_t **every_button,
                    menu_finish_t *menu_finish, sfVector2i mouse_click)
{
    if (struct_game->script == DIS_MENU_PRINCIPAL) {
        display_menu_principal(struct_game, every_button[DIS_MENU_PRINCIPAL],
        menu_finish[0], mouse_click);
    }
    if (struct_game->script == DIS_MENU_OPTION) {
        display_menu_option(struct_game, every_button[DIS_MENU_OPTION],
        menu_finish[0], mouse_click);
    } else {
        display_gameplay_bis(struct_game, every_button, menu_finish,
        mouse_click);
    }
}
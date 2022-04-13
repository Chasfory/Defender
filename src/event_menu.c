/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** event_menu
*/

#include "defender.h"
#include "tower.h"

void menu_button_four(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t **tower_position)
{
    if (struct_game->script == LEVEL_3) {
        handling_level_3(every_button, struct_game, mouse_click,
        tower_position[2]);
        return;
    }
}

void menu_button_three(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t **tower_position)
{
    if (struct_game->script == DIS_MENU_START) {
        play_music_button(struct_game);
        handling_menu_start(every_button[DIS_MENU_START], struct_game,
        mouse_click);
        return;
    }
    if (struct_game->script == LEVEL_1) {
        handling_level_1(every_button, struct_game, mouse_click,
        tower_position[0]);
        return;
    }
    if (struct_game->script == LEVEL_2) {
        handling_level_2(every_button, struct_game, mouse_click,
        tower_position[1]);
        return;
    }
    menu_button_four(every_button, struct_game, mouse_click, tower_position);
}

void menu_button_bis(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t **tower_position)
{
    if (struct_game->script == DIS_MENU_PAUSE) {
        play_music_button(struct_game);
        handling_menu_pause(every_button[DIS_MENU_PAUSE], struct_game,
        mouse_click);
        return;
    }
    if (struct_game->script == DIS_MENU_GAME_OVER) {
        play_music_button(struct_game);
        handling_menu_game_over(every_button[DIS_MENU_GAME_OVER], struct_game,
        mouse_click);
        return;
    }
    if (struct_game->script == DIS_MENU_WIN) {
        play_music_button(struct_game);
        handling_menu_win(every_button[DIS_MENU_WIN], struct_game,
        mouse_click);
        return;
    }
    menu_button_three(every_button, struct_game, mouse_click, tower_position);
}

void menu_button(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t **tower_position)
{
    if (struct_game->script == DIS_MENU_PRINCIPAL) {
        play_music_button(struct_game);
        handling_menu_principal(every_button[DIS_MENU_PRINCIPAL],
        struct_game, mouse_click);
        return;
    }
    if (struct_game->script == DIS_MENU_OPTION) {
        play_music_button(struct_game);
        handling_menu_option(every_button[DIS_MENU_OPTION],
        struct_game, mouse_click);
        return;
    }
    if (struct_game->script == DIS_MENU_HELP) {
        play_music_button(struct_game);
        handling_menu_help(every_button[DIS_MENU_HELP],
        struct_game, mouse_click);
        return;
    }
    menu_button_bis(every_button, struct_game, mouse_click, tower_position);
}

void post_tower(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t *tower_position)
{
    if (struct_game->script == LEVEL_1) {
        handling_level_1_tower(every_button[LEVEL_1], struct_game,
        mouse_click, tower_position);
        return;
    }
    if (struct_game->script == LEVEL_2) {
        handling_level_2_tower(every_button[LEVEL_1], struct_game,
        mouse_click, tower_position);
        return;
    }
    if (struct_game->script == LEVEL_3) {
        handling_level_3_tower(every_button[LEVEL_1], struct_game,
        mouse_click, tower_position);
        return;
    }
}
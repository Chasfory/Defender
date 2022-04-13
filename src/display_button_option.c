/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_button_option
*/

#include "defender.h"
#include "tower.h"

void display_button_option_mouse_bis(button_finish_t *every_button,
    game_t *struct_game, int i)
{
    if (i == 2 && struct_game->status_music == 1) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[3], NULL);
    } else if (i == 2 && struct_game->status_music == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[0], NULL);
    }
}

void display_button_option_mouse(button_finish_t *every_button,
    game_t *struct_game, int i)
{
    if (i == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[0], NULL);
    }
    if (i == 1 && struct_game->status_son == 1) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[3], NULL);
    } else if (i == 1 && struct_game->status_son == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[0], NULL);
    }
    display_button_option_mouse_bis(every_button, struct_game, i);
}

void display_button_option_bis(button_finish_t *every_button,
    game_t *struct_game, int i)
{
    if (i == 2 && struct_game->status_music == 1) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[4], NULL);
    } else if (i == 2 && struct_game->status_music == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[1], NULL);
    }
}

void display_button_option(button_finish_t *every_button,
    game_t *struct_game, int i)
{
    if (i == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[1], NULL);
    }
    if (i == 1 && struct_game->status_son == 1) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[4], NULL);
    } else if (i == 1 && struct_game->status_son == 0) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[i].sprite[1], NULL);
    }
    display_button_option_bis(every_button, struct_game, i);
}
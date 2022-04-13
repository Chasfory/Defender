/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_menu_game
*/

#include "defender.h"
#include "tower.h"

void display_menu_principal(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    for (int i = 0; i < 4; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 120))) {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[1], NULL);
        } else {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[0], NULL);
        }
    }
    display_text_menu_principal(struct_game);
}

void display_menu_help(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    if (((mouse_click.x <= (int) (every_button[0].position.x + 180) &&
    (mouse_click.x >= (int) every_button[0].position.x))) &&
    ((mouse_click.y >= (int) every_button[0].position.y) &&
    (mouse_click.y <= (int) every_button[0].position.y + 120))) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[0].sprite[0], NULL);
    } else {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[0].sprite[1], NULL);
    }
    display_text_menu_help(struct_game);
}

void display_menu_pause(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    for (int i = 0; i < 4; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 120))) {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[1], NULL);
        } else {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[0], NULL);
        }
    }
    play_music_fond(struct_game);
    display_text_menu_pause(struct_game);
}

void display_menu_game_over(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    play_music_lose(struct_game);
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    for (int i = 0; i < 2; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 120))) {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[1], NULL);
        } else {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[0], NULL);
        }
    }
}

void display_menu_win(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    play_music_win(struct_game);
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    for (int i = 0; i < 2; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 120))) {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[1], NULL);
        } else {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[0], NULL);
        }
    }
}
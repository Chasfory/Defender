/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_menu_game_2
*/

#include "tower.h"
#include "defender.h"

void display_menu_start(game_t *struct_game, button_finish_t *every_button,
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
    display_text_menu_level(struct_game);
}

void display_menu_option(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click)
{
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    for (int i = 0; i < 3; i++) {
        if (((mouse_click.x <= (int) (every_button[i].position.x + 180) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 120))) {
            display_button_option_mouse(every_button, struct_game, i);
        } else {
            display_button_option(every_button, struct_game, i);
        }
    }
    display_text_menu_option(struct_game);
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_menu_tower
*/

#include "defender.h"
#include "tower.h"

void every_button_sold_plus(button_finish_t *every_button,
                            tower_map_t tower_position, int i)
{
    every_button[i].position.x = every_button[i].position.x +
    tower_position.post_tower.x;
    every_button[i].position.y = every_button[i].position.y +
    tower_position.post_tower.y;
}

void every_button_sold_minus(button_finish_t *every_button,
                            tower_map_t tower_position, int i)
{
    every_button[i].position.x = every_button[i].position.x -
    tower_position.post_tower.x;
    every_button[i].position.y = every_button[i].position.y -
    tower_position.post_tower.y;
}

void display_menu_sold(game_t *struct_game, button_finish_t *every_button,
                    sfVector2i mouse_click, tower_map_t tower_position)
{
    for (int i = 0; i < 4; i++) {
        every_button_sold_plus(every_button, tower_position, i);
        if (((mouse_click.x <= (int) (every_button[i].position.x + 70) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 70))) {
            sfSprite_setPosition(every_button[i].sprite[1],
            every_button[i].position);
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[1], NULL);
            display_text_tower(struct_game, every_button, i);
        } else {
            sfSprite_setPosition(every_button[i].sprite[0],
            every_button[i].position);
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[i].sprite[0], NULL);
        }
        every_button_sold_minus(every_button, tower_position, i);
    }
}

void display_menu_level_up_bis(button_finish_t *every_button,
                            game_t *struct_game, int i)
{
    sfSprite_setPosition(every_button[i].sprite[0],
    every_button[i].position);
    sfRenderWindow_drawSprite(struct_game->window,
    every_button[i].sprite[0], NULL);
}

void display_menu_level_up(game_t *struct_game, button_finish_t *every_button,
                    sfVector2i mouse_click, tower_map_t tower_position)
{
    for (int i = 0; i < 2; i++) {
        every_button_sold_plus(every_button, tower_position, i);
        if (((mouse_click.x <= (int) (every_button[i].position.x + 70) &&
        (mouse_click.x >= (int) every_button[i].position.x))) &&
        ((mouse_click.y >= (int) every_button[i].position.y) &&
        (mouse_click.y <= (int) every_button[i].position.y + 70))) {
            if (tower_position.tower_level != NO_TOWER) {
                sfSprite_setPosition(every_button[i].sprite[1],
                every_button[i].position);
                sfSprite_setColor(every_button[i].sprite[1],
                every_button[i].color);
                sfRenderWindow_drawSprite(struct_game->window,
                every_button[i].sprite[1], NULL);
            }
        } else {
            display_menu_level_up_bis(every_button, struct_game, i);
        }
        every_button_sold_minus(every_button, tower_position, i);
    }
}
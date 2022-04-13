/*
** EPITECH PROJECT, 2021
** display_money.c
** File description:
** draw the money on screen
*/

#include "defender.h"
#include "tower.h"

void draw_money(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("counter.ttf");

    sfText_setString(struct_game->money.money_level,
    my_itoa(struct_game->money.money));
    sfText_setFont(struct_game->money.money_level, Texture);
    sfText_setScale(struct_game->money.money_level, (sfVector2f){2, 2});
    sfText_setPosition(struct_game->money.money_level, (sfVector2f){150, 20});
    sfText_setColor(struct_game->money.money_level,
    (sfColor){25, 25, 25, 255});
    sfRenderWindow_drawText(struct_game->window,
    struct_game->money.money_level, NULL);
}

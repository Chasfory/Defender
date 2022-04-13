/*
** EPITECH PROJECT, 2021
** display_score.c
** File description:
** display the actual score
*/

#include "defender.h"
#include "tower.h"

void draw_counter(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("counter.ttf");

    sfText_setString(struct_game->counter.score_level,
    my_itoa(struct_game->counter.score));
    sfText_setFont(struct_game->counter.score_level, Texture);
    sfText_setScale(struct_game->counter.score_level, (sfVector2f){2, 2});
    sfText_setPosition(struct_game->counter.score_level,
    (sfVector2f){950, 20});
    sfRenderWindow_drawText(struct_game->window,
    struct_game->counter.score_level, NULL);
}

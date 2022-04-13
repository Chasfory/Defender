/*
** EPITECH PROJECT, 2021
** cursor.c
** File description:
** add a new cursor
*/

#include "tower.h"
#include "defender.h"

void mouse_cursor(game_t *struct_game)
{
    struct_game->cursor.scale_cursor.x = 1;
    struct_game->cursor.scale_cursor.y = 1;
    struct_game->cursor.cursor =
    sfTexture_createFromFile("assets/new/curseur.png", NULL);
    struct_game->cursor.my_cursor = sfSprite_create();

    sfRenderWindow_setMouseCursorVisible(struct_game->window, sfFalse);
    sfSprite_setScale(struct_game->cursor.my_cursor,
    struct_game->cursor.scale_cursor);
    sfSprite_setTexture(struct_game->cursor.my_cursor,
    struct_game->cursor.cursor, sfFalse);
}

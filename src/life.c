/*
** EPITECH PROJECT, 2021
** life.c
** File description:
** create the life of the castle
*/

#include "defender.h"
#include "tower.h"

void create_life(game_t *struct_game)
{
    struct_game->life.texture = sfTexture_createFromFile("assets/life.png",
    NULL);
    struct_game->life.sprite = sfSprite_create();
    sfSprite_setTexture(struct_game->life.sprite, struct_game->life.texture,
    sfTrue);
    sfSprite_setScale(struct_game->life.sprite, (sfVector2f){2, 2});
    sfSprite_setPosition(struct_game->life.sprite, (sfVector2f){1700, 900});
    sfSprite_setTextureRect(struct_game->life.sprite,
    (sfIntRect){0, 0, 84, 40});
    struct_game->life.rect_life.height = 0;
    struct_game->life.rect_life.width = 0;
    struct_game->life.rect_life.left = 84;
    struct_game->life.rect_life.top = 37;
}

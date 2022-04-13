/*
** EPITECH PROJECT, 2021
** create_sprite.c
** File description:
** create_sprite fonction
*/

#include <SFML/Graphics.h>

sfSprite *create_sprite(unsigned int x, unsigned int y, sfTexture *texture, sfIntRect rect)
{
    sfSprite *sprite = sfSprite_create();
    sfVector2f sprite_pos = {x, y};

    sfSprite_setPosition(sprite, sprite_pos);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setTextureRect(sprite, rect);
    return (sprite);
}
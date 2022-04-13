/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** menu
*/

#include "defender.h"
#include "tower.h"

void create_menu(menu_t menu_game, menu_finish_t *menu_finish)
{
    menu_finish->menu = sfTexture_createFromFile(menu_game.texture, NULL);
    menu_finish->sprite = sfSprite_create();
    sfSprite_setTexture(menu_finish->sprite, menu_finish->menu, sfTrue);
    sfSprite_setScale(menu_finish->sprite, menu_game.scale);
    sfSprite_setPosition(menu_finish->sprite, menu_game.position);
    menu_finish->rect.height = menu_game.rect.height;
    menu_finish->rect.left = menu_game.rect.left;
    menu_finish->rect.top = menu_game.rect.top;
    menu_finish->rect.width = menu_game.rect.width;
    sfSprite_setTextureRect(menu_finish->sprite, menu_finish->rect);
}
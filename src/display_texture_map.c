/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_texture_map
*/

#include "defender.h"
#include "tower.h"

void display_texture_map_bis(texture_map_finish_t *map_finish,
                            game_t *game, char map)
{
    if (map == 'T') {
        sfSprite_setPosition(map_finish->sprite[2], map_finish->position);
        sfRenderWindow_drawSprite(game->window, map_finish->sprite[2], NULL);
    }
    else {
        sfSprite_setPosition(map_finish->sprite[0], map_finish->position);
        sfRenderWindow_drawSprite(game->window, map_finish->sprite[0], NULL);
    }
}

void display_texture_map(texture_map_finish_t *map_finish,
                        game_t *game, char map)
{
    if (map == 'E') {
        sfSprite_setTextureRect(map_finish->sprite[4], (sfIntRect)
        {0, 208, 208, 192});
        sfSprite_setScale(map_finish->sprite[4], (sfVector2f) {1, 1});
        map_finish->boat_position.x = map_finish->position.x - 120;
        map_finish->boat_position.y = map_finish->position.y - 130;
    }
    else if (map == '-') {
        sfSprite_setPosition(map_finish->sprite[1], map_finish->position);
        sfRenderWindow_drawSprite(game->window, map_finish->sprite[1], NULL);
    } else {
        display_texture_map_bis(map_finish, game, map);
    }
}
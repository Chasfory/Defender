/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_map
*/

#include "defender.h"
#include "tower.h"

void build_map(texture_map_t map_level, texture_map_finish_t *map_finish)
{
    for (int i = 0; i < 5; i++) {
        map_finish->stade[i] = sfTexture_createFromFile(map_level.texture[i],
        NULL);
        map_finish->sprite[i] = sfSprite_create();
        sfSprite_setTexture(map_finish->sprite[i], map_finish->stade[i],
        sfTrue);
        sfSprite_setTextureRect(map_finish->sprite[i], map_level.rect);
    }
    map_finish->boat_position.x = 0;
    map_finish->boat_position.y = 0;
    map_finish->rect = map_level.rect;
    map_finish->position.x = 0;
    map_finish->position.y = 0;
}

void display_map_level_1(texture_map_finish_t *map_finish, map_t *map,
                        game_t *game)
{
    map_finish->position.x = 0;
    map_finish->position.y = 0;
    for (int i = 0; map->level_1[i]; i++) {
        for (int j = 0; map->level_1[i][j] != '\0'; j++) {
            display_texture_map(map_finish, game, map->level_1[i][j]);
            map_finish->position.x += 32;
        }
        map_finish->position.x = 0;
        map_finish->position.y += 30;
    }
    sfSprite_setPosition(map_finish->sprite[4], map_finish->boat_position);
    sfRenderWindow_drawSprite(game->window, map_finish->sprite[4], NULL);
}

void display_map_level_2(texture_map_finish_t *map_finish,
                        map_t *map, game_t *game)
{
    map_finish->position.x = 0;
    map_finish->position.y = 0;
    for (int i = 0; map->level_2[i]; i++) {
        for (int j = 0; map->level_2[i][j] != '\0'; j++) {
            display_texture_map(map_finish, game, map->level_2[i][j]);
            map_finish->position.x += 32;
        }
        map_finish->position.x = 0;
        map_finish->position.y += 29;
    }
    sfSprite_setPosition(map_finish->sprite[4], map_finish->boat_position);
    sfRenderWindow_drawSprite(game->window, map_finish->sprite[4], NULL);
}

void display_map_level_3(texture_map_finish_t *map_finish,
                        map_t *map, game_t *game)
{
    map_finish->position.x = 0;
    map_finish->position.y = 0;
    for (int i = 0; map->level_3[i]; i++) {
        for (int j = 0; map->level_3[i][j] != '\0'; j++) {
            display_texture_map(map_finish, game, map->level_3[i][j]);
            map_finish->position.x += 32;
        }
        map_finish->position.x = 0;
        map_finish->position.y += 29;
    }
    sfSprite_setPosition(map_finish->sprite[4], map_finish->boat_position);
    sfRenderWindow_drawSprite(game->window, map_finish->sprite[4], NULL);
}
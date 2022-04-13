/*
** EPITECH PROJECT, 2021
** map.h
** File description:
** struct with all map
*/

#ifndef MAP_H
#define MAP_H

#include <stddef.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include "defender.h"

typedef struct texture_map_s {
    sfIntRect rect;
    sfVector2f size;
    const char **texture;
} texture_map_t;

typedef struct texture_map_finish_s {
    sfTexture *stade[6];
    sfSprite *sprite[6];
    sfIntRect **position_tower;
    sfIntRect rect;
    sfVector2f position;
    sfVector2f boat_position;
} texture_map_finish_t;

static const char *texture_map[] = {
    "assets/maps_texture/chemin.png",
    "assets/maps_texture/herbe.png",
    "assets/maps_texture/tower_1.png",
    "assets/maps_texture/tower_2.png",
    "assets/maps_texture/boat.png",
    NULL
};

static const texture_map_t map_level = {
    (sfIntRect) {0, 128, 32, 32},
    (sfVector2f) {1, 1},
    texture_map,
};

static const char *path_map[] = {
    "maps/level_1",
    "maps/level_2",
    "maps/level_3",
    NULL
};

typedef struct map_s {
    char **level_1;
    char **level_2;
    char **level_3;
} map_t;

#endif

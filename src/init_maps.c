/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** init_maps
*/

#include "defender.h"
#include "tower.h"

void copy_map_level_1(game_t *struct_game, map_t *map)
{
    int j = 0;
    int i = 0;

    struct_game->map.level_1 = malloc(sizeof(char *) * 38);
    for (i = 0; i < 37; i++) {
        struct_game->map.level_1[i] = malloc(sizeof(char) * 62);
        for (j = 0; j < 61; j++) {
            struct_game->map.level_1[i][j] = map->level_1[i][j];
        }
        struct_game->map.level_1[i][j] = '\0';
    }
    struct_game->map.level_1[i] = NULL;
}

void copy_map_level_2(game_t *struct_game, map_t *map)
{
    int j = 0;
    int i = 0;

    struct_game->map.level_2 = malloc(sizeof(char *) * 38);
    for (i = 0; i < 37; i++) {
        struct_game->map.level_2[i] = malloc(sizeof(char) * 62);
        for (j = 0; j < 61; j++) {
            struct_game->map.level_2[i][j] = map->level_2[i][j];
        }
        struct_game->map.level_2[i][j] = '\0';
    }
    struct_game->map.level_2[i] = NULL;
}

void copy_map_level_3(game_t *struct_game, map_t *map)
{
    int j = 0;
    int i = 0;

    struct_game->map.level_3 = malloc(sizeof(char *) * 38);
    for (i = 0; i < 37; i++) {
        struct_game->map.level_3[i] = malloc(sizeof(char) * 62);
        for (j = 0; j < 61; j++) {
            struct_game->map.level_3[i][j] = map->level_3[i][j];
        }
        struct_game->map.level_3[i][j] = '\0';
    }
    struct_game->map.level_3[i] = NULL;
}

void init_struct_game_next(game_t *struct_game, program_t *param)
{
    struct_game->clock = sfClock_create();
    struct_game->script = 0;
    struct_game->j = 0;
    struct_game->level = 0;
    struct_game->status_music = 0;
    struct_game->status_son = 0;
    struct_game->click = 0;
    struct_game->coin = 300;
    struct_game->display_tower = 0;
    struct_game->window_size.x = param->width;
    struct_game->window_size.y = param->height;
    struct_game->window = create_window(param);
    struct_game->counter.score = 0;
    struct_game->counter.counter_play = NULL;
    struct_game->counter.score_level = sfText_create();
    struct_game->money.money = 200;
    struct_game->money.money_play = NULL;
    struct_game->money.money_level = sfText_create();
}
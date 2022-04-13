/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_tower_game
*/

#include "tower.h"

void display_tower_level_1(tower_map_t *tower_position,
    int i, game_t *struct_game, sfVector2f tower_level_display)
{
    if (tower_position[i].tower_level == TOWER_1_1) {
        tower_position[i].tower_finish_level[0].post.x =
        tower_position[i].post_tower.x - 5;
        tower_position[i].tower_finish_level[0].post.y =
        tower_position[i].post_tower.y - 20;
        for (int l = 0; l < tower_position[i].level; l++) {
            tower_level_display.x += 0.1;
            tower_level_display.y += 0.1;
            tower_position[i].tower_finish_level[0].post.x -= 5;
            tower_position[i].tower_finish_level[0].post.y -= 5;
        }
    sfSprite_setScale(tower_position[i].tower_finish_level[0].sprite[0],
    tower_level_display);
    sfSprite_setPosition(tower_position[i].tower_finish_level[0].sprite[0],
    tower_position[i].tower_finish_level[0].post);
    sfSprite_setTextureRect(tower_position[i].tower_finish_level[0].sprite[0],
    tower_position[i].tower_finish_level[0].rect);
    sfRenderWindow_drawSprite(struct_game->window,
    tower_position[i].tower_finish_level[0].sprite[0], NULL);
    }
}

void display_tower_level_2(tower_map_t *tower_position,
    int i, game_t *struct_game, sfVector2f tower_level_display)
{
    if (tower_position[i].tower_level == TOWER_2_1) {
        tower_position[i].tower_finish_level[1].post.x =
        tower_position[i].post_tower.x - 5;
        tower_position[i].tower_finish_level[1].post.y =
        tower_position[i].post_tower.y - 20;
        for (int l = 0; l < tower_position[i].level; l++) {
            tower_level_display.x += 0.1;
            tower_level_display.y += 0.1;
            tower_position[i].tower_finish_level[1].post.x -= 5;
            tower_position[i].tower_finish_level[1].post.y -= 5;
        }
        sfSprite_setScale(tower_position[i].tower_finish_level[1].sprite[0],
        tower_level_display);
        sfSprite_setPosition(tower_position[i].tower_finish_level[1].sprite[0],
        tower_position[i].tower_finish_level[1].post);
        sfSprite_setTextureRect(tower_position[i].tower_finish_level[1].sprite[0],
        tower_position[i].tower_finish_level[1].rect);
        sfRenderWindow_drawSprite(struct_game->window,
        tower_position[i].tower_finish_level[1].sprite[0], NULL);
    }
}

void display_tower_level_3(tower_map_t *tower_position,
    int i, game_t *struct_game, sfVector2f tower_level_display)
{
    if (tower_position[i].tower_level == TOWER_3_1) {
        tower_position[i].tower_finish_level[2].post.x =
        tower_position[i].post_tower.x - 5;
        tower_position[i].tower_finish_level[2].post.y =
        tower_position[i].post_tower.y - 20;
        for (int l = 0; l < tower_position[i].level; l++) {
            tower_level_display.x += 0.1;
            tower_level_display.y += 0.1;
            tower_position[i].tower_finish_level[2].post.x -= 5;
            tower_position[i].tower_finish_level[2].post.y -= 5;
        }
        sfSprite_setScale(tower_position[i].tower_finish_level[2].sprite[0],
        tower_level_display);
        sfSprite_setPosition(tower_position[i].tower_finish_level[2].sprite[0],
        tower_position[i].tower_finish_level[2].post);
        sfSprite_setTextureRect(tower_position[i].tower_finish_level[2].sprite[0],
        tower_position[i].tower_finish_level[2].rect);
        sfRenderWindow_drawSprite(struct_game->window,
        tower_position[i].tower_finish_level[2].sprite[0], NULL);
    }
}

void display_tower_level_4(tower_map_t *tower_position,
    int i, game_t *struct_game, sfVector2f tower_level_display)
{
    if (tower_position[i].tower_level == TOWER_4_1) {
        tower_position[i].tower_finish_level[3].post.x =
        tower_position[i].post_tower.x - 5;
        tower_position[i].tower_finish_level[3].post.y =
        tower_position[i].post_tower.y - 20;
        for (int l = 0; l < tower_position[i].level; l++) {
            tower_level_display.x += 0.1;
            tower_level_display.y += 0.1;
            tower_position[i].tower_finish_level[3].post.x -= 5;
            tower_position[i].tower_finish_level[3].post.y -= 5;
        }
        sfSprite_setScale(tower_position[i].tower_finish_level[3].sprite[0],
        tower_level_display);
        sfSprite_setPosition(tower_position[i].tower_finish_level[3].sprite[0],
        tower_position[i].tower_finish_level[3].post);
        sfSprite_setTextureRect(tower_position[i].tower_finish_level[3].sprite[0],
        tower_position[i].tower_finish_level[3].rect);
        sfRenderWindow_drawSprite(struct_game->window,
        tower_position[i].tower_finish_level[3].sprite[0], NULL);
    }
}

void display_tower(tower_map_t *tower_position,
    int i, game_t *struct_game)
{
    sfVector2f tower_level_display;

    tower_level_display.x = (float) 0.7;
    tower_level_display.y = (float) 0.7;
    display_tower_level_1(tower_position, i,
    struct_game, tower_level_display);
    display_tower_level_2(tower_position, i,
    struct_game, tower_level_display);
    display_tower_level_3(tower_position, i,
    struct_game, tower_level_display);
    display_tower_level_4(tower_position, i,
    struct_game, tower_level_display);
}
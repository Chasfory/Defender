/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** funct_free
*/

#include "defender.h"
#include "tower.h"

void free_struct_game(game_t struct_game)
{
    sfRenderWindow_destroy(struct_game.window);
    sfClock_destroy(struct_game.clock);
    for (int i = 0; i < 6; i++) {
        sfMusic_destroy(struct_game.music.music[i]);
    }
    for (int j = 0; j < 5; j++) {
        sfTexture_destroy(struct_game.map_finish.stade[j]);
        sfSprite_destroy(struct_game.map_finish.sprite[j]);
    }
    free_struct_next(struct_game);
    for (int l = 0; l < 38; l++) {
        free(struct_game.map.level_2[l]);
    }
    free(struct_game.map.level_2);
    for (int l = 0; l < 38; l++) {
        free(struct_game.map.level_3[l]);
    }
    free(struct_game.map.level_3);
}

void free_every_button(button_finish_t **every_button)
{
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < nbr_button[i]; j++) {
            for (int l = 0; l < every_button[i][j].compt_stade; l++) {
                sfTexture_destroy(every_button[i][j].stade[l]);
                sfSprite_destroy(every_button[i][j].sprite[l]);
            }
        }
        free(every_button[i]);
    }
    free(every_button);
}

void free_menu(menu_finish_t *menu_finish)
{
    for (int i = 0; i < 2; i++) {
        sfTexture_destroy(menu_finish[i].menu);
        sfSprite_destroy(menu_finish[i].sprite);
    }
    free(menu_finish);
}

void free_tower_position(tower_map_t **tower_position)
{
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < nbr_tower[i]; j++) {
            for (int k = 0; k < 4; k++) {
                sfTexture_destroy(tower_position[i][j].
                tower_finish_level[k].stade[0]);
                sfSprite_destroy(tower_position[i][j].
                tower_finish_level[k].sprite[0]);
            }
            free(tower_position[i][j].tower_finish_level);
        }
        free(tower_position[i]);
    }
    free(tower_position);
}

void funct_free(game_t struct_game, button_finish_t **every_button,
            menu_finish_t *menu_finish, tower_map_t **tower_position)
{
    free_struct_game(struct_game);
    free_every_button(every_button);
    free_menu(menu_finish);
    free_tower_position(tower_position);
}
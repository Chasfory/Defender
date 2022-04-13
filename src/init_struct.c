/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** init_struct
*/

#include "defender.h"
#include "tower.h"

void tower_post(tower_map_t *tower_position, char **map, int nbr_tower,
                int level)
{
    int i = 0;
    double x = 0;
    double y = 0;

    for (int j = 0; i < nbr_tower; j++) {
        for (int l = 0; map[j][l] != '\0'; l++) {
            if (map[j][l] == 'T') {
                tower_position[i].tower_level = NO_TOWER;
                tower_position[i].level = 0;
                tower_position[i].tower_in_game = DIS_MENU_PRINCIPAL;
                tower_position[i].post_tower.x = x;
                tower_position[i].post_tower.y = y;
                i++;
            }
            x += 32;
        }
        x = 0;
        y += level;
    }
}

void init_display_tower(tower_map_t *tower_position, int nbr_tower)
{
    for (int j = 0; j < nbr_tower; j++) {
        tower_position[j].tower_finish_level =
        malloc(sizeof(tower_display_finish_t) * 4);
        for (int i = 0; i < 4; i++) {
            create_tower_display(&tower_position[j].tower_finish_level[i],
            display_every_tower[i]);
        }
    }
}

void create_tower_display(tower_display_finish_t *tower,
                    tower_display_t display_every_tower)
{
    tower->stade[0] = sfTexture_createFromFile(display_every_tower.texture[0],
    NULL);
    tower->sprite[0] = sfSprite_create();
    sfSprite_setTexture(tower->sprite[0], tower->stade[0], sfTrue);
    sfSprite_setScale(tower->sprite[0], display_every_tower.size);
    sfSprite_setTextureRect(tower->sprite[0], display_every_tower.rect);
    tower->color = display_every_tower.color;
    tower->rect = display_every_tower.rect;
    tower->size = display_every_tower.size;
    tower->post = display_every_tower.post;
}

void init_struct_game(game_t *struct_game, program_t *param, map_t *map)
{
    param->width = 1920;
    param->height = 1080;
    param->fps = 60;
    param->window = "My_defender";
    init_struct_game_next(struct_game, param);
    create_life(struct_game);
    create_music(struct_game);
    copy_map_level_1(struct_game, map);
    copy_map_level_2(struct_game, map);
    copy_map_level_3(struct_game, map);
}

void init_struct_tower_post(tower_map_t **tower_position, map_t *map)
{
    tower_position[0] = malloc(sizeof(tower_map_t) * nbr_tower[0]);
    tower_post(tower_position[0], map->level_1, nbr_tower[0], 30);
    init_display_tower(tower_position[0], nbr_tower[0]);
    tower_position[1] = malloc(sizeof(tower_map_t) * nbr_tower[1]);
    tower_post(tower_position[1], map->level_2, nbr_tower[1], 29);
    init_display_tower(tower_position[1], nbr_tower[1]);
    tower_position[2] = malloc(sizeof(tower_map_t) * nbr_tower[2]);
    tower_post(tower_position[2], map->level_3, nbr_tower[2], 29);
    init_display_tower(tower_position[2], nbr_tower[2]);
}

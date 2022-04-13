/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** tower
*/

#ifndef TOWER_H_
#define TOWER_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#include "defender.h"
#include "buttons.h"
#include "menu.h"
#include "map.h"
#include "program.h"
#include "my.h"

enum tower_up {
    NO_TOWER,
    TOWER_1_1,
    TOWER_1_2,
    TOWER_1_3,
    TOWER_2_1,
    TOWER_2_2,
    TOWER_2_3,
    TOWER_3_1,
    TOWER_3_2,
    TOWER_3_3,
    TOWER_4_1,
    TOWER_4_2,
    TOWER_4_3,
};

typedef struct tower_display_s {
    sfColor color;
    sfIntRect rect;
    sfVector2f size;
    sfVector2f post;
    const char **texture;
} tower_display_t;

typedef struct tower_display_finish_s {
    sfTexture *stade[2];
    sfSprite *sprite[2];
    sfIntRect rect;
    sfColor color;
    sfVector2f size;
    sfVector2f post;
} tower_display_finish_t;

static const char *sprite_tower_LEVEL_1[] = {
    "assets/new/turrets_1.png",
    NULL
};

static const char *sprite_tower_LEVEL_2[] = {
    "assets/new/turrets_2.png",
    NULL
};

static const char *sprite_tower_LEVEL_3[] = {
    "assets/new/turrets_3.png",
    NULL
};

static const char *sprite_tower_level_4[] = {
    "assets/new/turrets_4.png",
    NULL
};

static const tower_display_t tower_1 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 66, 70},
    (sfVector2f) {0.5, 0.5},
    (sfVector2f) {0, 0},
    sprite_tower_LEVEL_1,
};

static const tower_display_t tower_2 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 2, 63, 80},
    (sfVector2f) {0.5, 0.5},
    (sfVector2f) {0, 0},
    sprite_tower_LEVEL_2,
};

static const tower_display_t tower_3 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 65, 85},
    (sfVector2f) {0.5, 0.5},
    (sfVector2f) {0, 0},
    sprite_tower_LEVEL_3,
};

static const tower_display_t tower_4 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 2, 65, 80},
    (sfVector2f) {0.5, 0.5},
    (sfVector2f) {0, 0},
    sprite_tower_level_4,
};

static const tower_display_t display_every_tower[] = {
    tower_1,
    tower_2,
    tower_3,
    tower_4,
};

typedef struct tower_map_s {
    enum tower_up tower_level;
    enum states tower_in_game;
    sfIntRect tower;
    sfVector2f post_tower;
    sfColor level_2_tower;
    sfColor level_3_tower;
    tower_display_finish_t *tower_finish_level;
    int level;
} tower_map_t;

static const int nbr_tower[] = {
    5,
    8,
    17,
};

// display_menu_level_1.c
void click_tower_post(sfVector2i mouse_click, game_t *struct_game,
                        tower_map_t *tower_position, int i);
void display_boat(tower_map_t *tower_position, menu_finish_t menu_finish,
                game_t *struct_game, int i);
void display_menu_level_1(game_t *struct_game, button_finish_t **every_button,
                    tower_map_t *tower_position, menu_finish_t menu_finish);

// display_menu_level_2.c
void display_menu_level_2(game_t *struct_game, button_finish_t **every_button,
                    tower_map_t *tower_position, menu_finish_t menu_finish);

// display_menu_level_3.c
void display_menu_level_3(game_t *struct_game, button_finish_t **every_button,
                    tower_map_t *tower_position, menu_finish_t menu_finish);

// display_menu_tower.c
void every_button_sold_plus(button_finish_t *every_button,
                            tower_map_t tower_position, int i);
void every_button_sold_minus(button_finish_t *every_button,
                            tower_map_t tower_position, int i);
void display_menu_sold(game_t *struct_game, button_finish_t *every_button,
                    sfVector2i mouse_click, tower_map_t tower_position);
void display_menu_level_up_bis(button_finish_t *every_button,
                                game_t *struct_game, int i);
void display_menu_level_up(game_t *struct_game, button_finish_t *every_button,
                        sfVector2i mouse_click, tower_map_t tower_position);

// event_button_tower.c
void event_button_menu_tower_3(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);
void event_button_menu_tower_2(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);
void event_button_menu_tower(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);

// event_game_button_1.c
void event_1_bis(game_t *struct_game, button_finish_t **every_button,
                tower_map_t **tower_position, sfVector2i mouse_click);
void event_button_menu_level_1(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);

//event_game_button_2.c
void event_2_bis(game_t *struct_game, button_finish_t **every_button,
                tower_map_t **tower_position, sfVector2i mouse_click);
void event_button_menu_level_2(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);

// event_game_button_3.c
void event_3_bis(game_t *struct_game, button_finish_t **every_button,
                tower_map_t **tower_position, sfVector2i mouse_click);
void event_button_menu_level_3(game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position,
                sfVector2i mouse_click);

// event_game_operation.c
void every_button_display_plus(button_finish_t *every_button,
                game_t *struct_game, tower_map_t *tower_position, int i);
void every_button_display_minus(button_finish_t *every_button,
                game_t *struct_game, tower_map_t *tower_position, int i);

//event_game.c
void event_level_game(game_t *struct_game, button_finish_t **every_button,
                tower_map_t **tower_position, sfVector2i mouse_click);
void event_button_pressed(sfVector2i mouse_click, game_t *struct_game,
                button_finish_t **every_button, tower_map_t **tower_position);
void event_button_released(sfVector2i mouse_click, game_t *struct_game,
                tower_map_t **tower_position, button_finish_t **every_button);
void display_window(game_t *struct_game, button_finish_t **every_button,
                menu_finish_t *menu_finish, tower_map_t **tower_position);

// event_menu.c
void menu_button_four(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t **tower_position);
void menu_button_three(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t **tower_position);
void menu_button_bis(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t **tower_position);
void menu_button(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t **tower_position);
void post_tower(button_finish_t **every_button, game_t *struct_game,
                sfVector2i mouse_click, tower_map_t *tower_position);

// handling_level_1_tower.c
void handling_level_1_tower(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click, tower_map_t *tower_position);
void handling_level_tower_opt(tower_map_t *tower_position, int i);

// handling_level_1.c
void handling_level_1(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t *tower_position);
void handling_level_menus_level_up(sfVector2i mouse_click,
                    button_finish_t **every_button,
                    tower_map_t *tower_position, game_t *struct_game);
void handling_level_menus_tower(sfVector2i mouse_click,
                    button_finish_t **every_button,
                    tower_map_t *tower_position, game_t *struct_game);
void handling_level_menus_tower_opt(tower_map_t *tower_position, int j, game_t *struct_game);
int handling_level_click(game_t *struct_game, button_finish_t **every_button,
                    sfVector2i mouse_click);

// handling_level_2_tower.c
void handling_level_2_tower(button_finish_t *every_button,
                            game_t *struct_game, sfVector2i mouse_click,
                            tower_map_t *tower_position);

// handling_level_2.c
void handling_level_2(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t *tower_position);

// handling_level_3_tower.c
void handling_level_3_tower(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click, tower_map_t *tower_position);

// handling_level_3.c
void handling_level_3(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t *tower_position);

// init_struct.c
void init_struct_tower_post(tower_map_t **tower_position, map_t *map);
void create_tower_display(tower_display_finish_t *tower,
                        tower_display_t display_every_tower);
void init_display_tower(tower_map_t *tower_position, int nbr_tower);
void tower_post(tower_map_t *tower_position, char **map, int nbr_tower,
                int level);

// start_game.c
void display_maps(game_t *struct_game, button_finish_t **every_button,
                    tower_map_t **tower_position, menu_finish_t *menu_finish);

// funct_free.c
void funct_free(game_t struct_game, button_finish_t **every_button,
            menu_finish_t *menu_finish, tower_map_t **tower_position);

// animation_tower.c
void level_1_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button);
void level_2_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button);
void level_3_tower(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button);

// level_tower.c
void level_tower_1(tower_map_t *tower_position, int i);
void level_tower_2(tower_map_t *tower_position, int i, game_t *struct_game);
void level_tower_3(tower_map_t *tower_position, int i);
void level_tower_4(tower_map_t *tower_position, int i);

void copy_map_level_1(game_t *struct_game, map_t *map);
void copy_map_level_2(game_t *struct_game, map_t *map);
void copy_map_level_3(game_t *struct_game, map_t *map);
void init_struct_game_next(game_t *struct_game, program_t *param);
void free_struct_next(game_t struct_game);
void display_text_tower(game_t *struct_game,
                    button_finish_t *every_button, int i);
void display_tower(tower_map_t *tower_position,
    int i, game_t *struct_game);
void display_other(game_t *struct_game);

#endif /* !TOWER_H_ */
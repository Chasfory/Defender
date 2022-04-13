/*
** EPITECH PROJECT, 2021
** buttons.h
** File description:
** my_defender
*/

#ifndef BUTTONS_H
#define BUTTONS_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include "defender.h"

typedef struct buttons_s {
    sfColor color;
    sfIntRect rect;
    sfVector2f position;
    sfVector2f size;
    const char **texture;
} buttons_t;

typedef struct button_finish_s {
    sfTexture *stade[6];
    sfSprite *sprite[6];
    sfIntRect rect;
    sfColor color;
    sfVector2f position;
    int compt_stade;
} button_finish_t;

static const char *sprite_button_start[] = {
    "assets/Button/menu/play_1.png",
    "assets/Button/menu/play.png",
    "assets/Button/menu/play_2.png",
    NULL
};

static const char *sprite_button_exit[] = {
    "assets/Button/menu/exit_1.png",
    "assets/Button/menu/exit.png",
    "assets/Button/menu/exit_2.png",
    NULL
};

static const char *sprite_button_option[] = {
    "assets/Button/menu/options_1.png",
    "assets/Button/menu/options.png",
    "assets/Button/menu/options_2.png",
    NULL
};

static const char *sprite_button_help[] = {
    "assets/Button/menu/help_1.png",
    "assets/Button/menu/help.png",
    "assets/Button/menu/help_2.png",
    NULL
};

static const char *sprite_button_pause[] = {
    "assets/Button/menu/option.png",
    "assets/Button/menu/Pressed_option.png",
    "assets/Button/menu/option.png",
    NULL
};

static const char *sprite_button_music_on_off[] = {
    "assets/Button/menu/music_button.png",
    "assets/Button/menu/Pressed_music.png",
    "assets/Button/menu/music_button.png",
    "assets/Button/menu/no_music.png",
    "assets/Button/menu/Pressed_music_off.png",
    "assets/Button/menu/no_music.png",
    NULL
};

static const char *sprite_button_son_on_off[] = {
    "assets/Button/menu/son_play.png",
    "assets/Button/menu/Pressed_son_on.png",
    "assets/Button/menu/son_play.png",
    "assets/Button/menu/no_son.png",
    "assets/Button/menu/Pressed_son_off.png",
    "assets/Button/menu/no_son.png",
    NULL
};

static const char *sprite_button_home[] = {
    "assets/Button/menu/return_menu.png",
    "assets/Button/menu/Pressed_home.png",
    "assets/Button/menu/return_menu.png",
    NULL
};

static const char *sprite_button_LEVEL_1[] = {
    "assets/Button/menu/Idle_1.png",
    "assets/Button/menu/Disabled_1.png",
    "assets/Button/menu/Idle_1_bis.png",
    NULL
};

static const char *sprite_button_LEVEL_2[] = {
    "assets/Button/menu/Idle_2.png",
    "assets/Button/menu/Disabled_2.png",
    "assets/Button/menu/Idle_2_bis.png",
    NULL
};

static const char *sprite_button_LEVEL_3[] = {
    "assets/Button/menu/Idle_3.png",
    "assets/Button/menu/Disabled_3.png",
    "assets/Button/menu/Idle_3_bis.png",
    NULL
};

static const char *sprite_button_game_pause[] = {
    "assets/Button/menu/return_game_off.png",
    "assets/Button/menu/return_game.png",
    "assets/Button/menu/return_game_off.png",
    NULL
};

static const char *sprite_button_menu_tower[] = {
    "assets/new/Turrets_button.png",
    "assets/new/Turrets_button_click.png",
    NULL
};

static const char *sprite_button_menu_tower_sold[] = {
    "assets/Button/menu/sold.png",
    "assets/Button/menu/sold.png",
    NULL
};

static const char *sprite_button_menu_tower_level_up[] = {
    "assets/Button/menu/level_up.png",
    "assets/Button/menu/level_up.png",
    NULL
};

static const buttons_t menu_start = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 49, 20},
    (sfVector2f) {900, 350},
    (sfVector2f) {4, 4},
    sprite_button_start,
};

static const buttons_t menu_game_pause = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 49, 20},
    (sfVector2f) {400, 750},
    (sfVector2f) {4, 4},
    sprite_button_game_pause,
};

static const buttons_t menu_exit = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 49, 20},
    (sfVector2f) {900, 650},
    (sfVector2f) {4, 4},
    sprite_button_exit,
};

static const buttons_t menu_option = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 49, 20},
    (sfVector2f) {900, 500},
    (sfVector2f) {4, 4},
    sprite_button_option,
};

static const buttons_t menu_help = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {400, 750},
    (sfVector2f) {4, 4},
    sprite_button_help,
};

static const buttons_t menu_pause_game = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {1800, 50},
    (sfVector2f) {4, 4},
    sprite_button_pause,
};

static const buttons_t menu_music_on_off = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {950, 400},
    (sfVector2f) {4, 4},
    sprite_button_music_on_off,
};

static const buttons_t menu_son_on_off = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {950, 550},
    (sfVector2f) {4, 4},
    sprite_button_son_on_off,
};

static const buttons_t menu_home = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {1400, 750},
    (sfVector2f) {4, 4},
    sprite_button_home,
};

static const buttons_t menu_LEVEL_1 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {950, 400},
    (sfVector2f) {4, 4},
    sprite_button_LEVEL_1,
};

static const buttons_t menu_LEVEL_2 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {950, 550},
    (sfVector2f) {4, 4},
    sprite_button_LEVEL_2,
};

static const buttons_t menu_LEVEL_3 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 21, 22},
    (sfVector2f) {950, 700},
    (sfVector2f) {4, 4},
    sprite_button_LEVEL_3,
};

static const buttons_t menu_tower_1 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 130, 130},
    (sfVector2f) {-146, -10},
    (sfVector2f) {0.5, 0.5},
    sprite_button_menu_tower,
};

static const buttons_t menu_tower_2 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 135, 130, 130},
    (sfVector2f) {-10, -150},
    (sfVector2f) {0.5, 0.5},
    sprite_button_menu_tower,
};

static const buttons_t menu_tower_3 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 270, 130, 130},
    (sfVector2f) {-10, 130},
    (sfVector2f) {0.5, 0.5},
    sprite_button_menu_tower,
};

static const buttons_t menu_tower_4 = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 400, 130, 130},
    (sfVector2f) {130, -10},
    (sfVector2f) {0.5, 0.5},
    sprite_button_menu_tower,
};

static const buttons_t menu_tower_sold = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 88, 88},
    (sfVector2f) {115, -25},
    (sfVector2f) {1, 1},
    sprite_button_menu_tower_sold,
};

static const buttons_t menu_tower_level_up = {
    (sfColor) {25, 25, 25, 255},
    (sfIntRect) {0, 0, 88, 88},
    (sfVector2f) {-160, -20},
    (sfVector2f) {1, 1},
    sprite_button_menu_tower_level_up,
};

static const buttons_t button_menu_principal[] = {
    menu_start,
    menu_exit,
    menu_option,
    menu_help,
};

static const buttons_t button_menu_option[] = {
    menu_home,
    menu_son_on_off,
    menu_music_on_off,
};

static const buttons_t button_menu_win[] = {
    menu_exit,
    menu_home,
};

static const buttons_t button_menu_lose[] = {
    menu_exit,
    menu_home,
};

static const buttons_t button_menu_help[] = {
    menu_home,
};

static const buttons_t button_menu_pause[] = {
    menu_option,
    menu_home,
    menu_exit,
    menu_game_pause,
};

static const buttons_t button_menu_start[] = {
    menu_LEVEL_1,
    menu_LEVEL_2,
    menu_LEVEL_3,
    menu_home,
};

static const buttons_t button_menu_LEVEL_1[] = {
    menu_pause_game,
};

static const buttons_t button_menu_LEVEL_2[] = {
    menu_pause_game,
};

static const buttons_t button_menu_LEVEL_3[] = {
    menu_pause_game,
};

static const buttons_t button_menu_tower[] = {
    menu_tower_1,
    menu_tower_2,
    menu_tower_3,
    menu_tower_4,
};

static const buttons_t button_menu_level_up[] = {
    menu_tower_level_up,
    menu_tower_sold,
};

static const buttons_t *button_general[] = {
    button_menu_principal,
    button_menu_option,
    button_menu_help,
    button_menu_pause,
    button_menu_win,
    button_menu_lose,
    button_menu_start,
    button_menu_LEVEL_1,
    button_menu_LEVEL_2,
    button_menu_LEVEL_3,
    button_menu_tower,
    button_menu_level_up,
};

static const int nbr_button[] = {
    4,
    3,
    1,
    4,
    2,
    2,
    4,
    1,
    1,
    1,
    4,
    2,
    0,
};

#endif /* !BUTTONS_H */
/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** Task02
*/

#ifndef DEFENDER_H
#define DEFENDER_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#include "buttons.h"
#include "menu.h"
#include "map.h"
#include "program.h"
#include "my.h"
#include "enemies.h"

enum states {
    DIS_MENU_PRINCIPAL,
    DIS_MENU_OPTION,
    DIS_MENU_HELP,
    DIS_MENU_PAUSE,
    DIS_MENU_WIN,
    DIS_MENU_GAME_OVER,
    DIS_MENU_START,
    LEVEL_1,
    LEVEL_2,
    LEVEL_3,
    DIS_MENU_TOWER,
    DIS_MENU_LEVEL_UP,
    DIS_MENU_EXIT,
};

typedef struct counter_s {
    sfText *score_level;
    char *counter_play;
    int score;
} counter_t;

typedef struct money_s {
    sfText *money_level;
    char *money_play;
    int money;
} money_t;

typedef struct cursor_s {
    sfTexture *cursor;
    sfSprite *my_cursor;
    sfVector2f position1;
    sfVector2f scale_cursor;
    sfVector2i position;
} cursor_t;

typedef struct life_s {
    int nbr_life;
    sfVector2f post;
    sfTexture *texture;
    sfIntRect rect_life;
    sfSprite *sprite;
} life_t;

static const char *music_text[] = {
    "assets/musics/music_def.ogg",
    "assets/musics/coin.ogg",
    "assets/musics/tower.ogg",
    "assets/musics/click.ogg",
    "assets/musics/win.ogg",
    "assets/musics/lose.ogg",
};

typedef struct music_s {
    sfMusic *music[7];
    int music_play;
    int effect;
    int opt;
} music_t;

typedef struct game_s {
    enum states script;
    int level;
    int display_tower;
    int coin;
    int click;
    int status_son;
    int status_music;
    int j;
    sfRenderWindow *window;
    sfVector2f window_size;
    sfEvent event;
    sfClock *clock;
    float time;
    float prev_time;
    int delta;
    music_t music;
    texture_map_finish_t map_finish;
    counter_t counter;
    cursor_t cursor;
    money_t money;
    life_t life;
    map_t map;
    enemies_t *enemy;
} game_t;

// button.c
void create_button(buttons_t const *button,
                    button_finish_t *button_finish, int nbr_button);

// display_button_option.c
void display_button_option_mouse_bis(button_finish_t *every_button,
                                    game_t *struct_game, int i);
void display_button_option_mouse(button_finish_t *every_button,
                                game_t *struct_game, int i);
void display_button_option_bis(button_finish_t *every_button,
                                game_t *struct_game, int i);
void display_button_option(button_finish_t *every_button,
                            game_t *struct_game, int i);

// display_gameplay.c
void display_gameplay_four(game_t *struct_game, button_finish_t **every_button,
                        menu_finish_t *menu_finish, sfVector2i mouse_click);
void display_gameplay_three(game_t *struct_game,
            button_finish_t **every_button, menu_finish_t *menu_finish,
            sfVector2i mouse_click);
void display_gameplay_bis(game_t *struct_game, button_finish_t **every_button,
                        menu_finish_t *menu_finish, sfVector2i mouse_click);
void display_gameplay(game_t *struct_game, button_finish_t **every_button,
                        menu_finish_t *menu_finish, sfVector2i mouse_click);

// display_map.c
void build_map(texture_map_t map_level, texture_map_finish_t *map_finish);
void display_map_level_1(texture_map_finish_t *map_finish,
                        map_t *map, game_t *game);
void display_map_level_2(texture_map_finish_t *map_finish,
                        map_t *map, game_t *game);
void display_map_level_3(texture_map_finish_t *map_finish,
                        map_t *map, game_t *game);

// display_menu_game_1.c
void display_menu_principal(game_t *struct_game, button_finish_t *every_button,
                            menu_finish_t menu_finish, sfVector2i mouse_click);
void display_menu_help(game_t *struct_game, button_finish_t *every_button,
                        menu_finish_t menu_finish, sfVector2i mouse_click);
void display_menu_pause(game_t *struct_game, button_finish_t *every_button,
                        menu_finish_t menu_finish, sfVector2i mouse_click);
void display_menu_game_over(game_t *struct_game, button_finish_t *every_button,
                            menu_finish_t menu_finish, sfVector2i mouse_click);
void display_menu_win(game_t *struct_game, button_finish_t *every_button,
                    menu_finish_t menu_finish, sfVector2i mouse_click);

// display_menu_game_2.c
void display_menu_start(game_t *struct_game, button_finish_t *every_button,
                        menu_finish_t menu_finish, sfVector2i mouse_click);
void display_menu_option(game_t *struct_game, button_finish_t *every_button,
                        menu_finish_t menu_finish, sfVector2i mouse_click);

// display_menu_LEVEL_1.c
void click_mouse_level(sfVector2i mouse_click, game_t *struct_game,
                        button_finish_t **every_button);

//display_texture_map.c
void display_texture_map_bis(texture_map_finish_t *map_finish, game_t *game,
                            char map);
void display_texture_map(texture_map_finish_t *map_finish, game_t *game,
                        char map);

// file_to_str.c
char *file_to_str(char const *filepath);

// handling_menu_help.c
void handling_menu_help(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click);

// handling_menu_game_over.c
void handling_menu_game_over(button_finish_t *every_button,
                            game_t *struct_game, sfVector2i mouse_click);

// handling_menu_option.c
void handling_menu_option(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click);
void handling_menu_option_opt(button_finish_t *every_button,
                                game_t *struct_game, int event_button);

// handling_menu_pause.c
void handling_menu_pause(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click);
void handling_menu_pause_opt(int event_button, game_t *struct_game);

// handling_menu_principal.c
void handling_menu_principal(button_finish_t *every_button,
                            game_t *struct_game, sfVector2i mouse_click);
void handling_menu_principal_opt(int event_button, game_t *struct_game);

// handling_menu_start.c
void handling_menu_start(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click);
void handling_menu_start_opt(int event_button, game_t *struct_game);

// handling_menu_win.c
void handling_menu_win(button_finish_t *every_button, game_t *struct_game,
                        sfVector2i mouse_click);

// init_struct.c
void init_struct_game(game_t *struct_game, program_t *param, map_t *map);

// level_to_str.c
map_t level_to_str(void);

// menu.c
void create_menu(menu_t menu_game, menu_finish_t *menu_finish);

// text.c
void display_text_menu_help(game_t *struct_game);
void display_text_menu_principal(game_t *struct_game);
void display_text_menu_pause(game_t *struct_game);
void display_text_menu_option(game_t *struct_game);
void display_text_menu_level(game_t *struct_game);
void display_text_tower_1(game_t *struct_game,
            button_finish_t *every_button, int i);
void display_text_tower_2(game_t *struct_game,
                    button_finish_t *every_button, int i);
void display_text_tower_3(game_t *struct_game,
            button_finish_t *every_button, int i);
void display_text_tower_4(game_t *struct_game,
                button_finish_t *every_button, int i);

// start_game.c
int start_game(map_t *map);
void create_start_menu(button_finish_t **every_buttons,
                        menu_finish_t *menu_finish);
sfMusic *music();
sfRenderWindow *create_window(program_t *param);

// cursor.c
void mouse_cursor(game_t *struct_game);

// display_score.c
void draw_counter(game_t *struct_game);

// display_money.c
void draw_money(game_t *struct_game);

// lib.c
char *my_itoa(int nb);

// life.c
void create_life(game_t *struct_game);

// music.c
void create_music(game_t *struct_game);
void play_music_button(game_t *struct_game);
void play_music_lose(game_t *struct_game);
void play_music_win(game_t *struct_game);
void play_music_tower(game_t *struct_game);
void play_music_achat(game_t *struct_game);
void play_music_fond(game_t *struct_game);

void math_delta(game_t *struct_game);

void display_enemies(enemies_t *enemies, game_t *struct_game);


#endif /*DEFENDER_H*/
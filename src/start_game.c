/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** my_defender
*/

#include "tower.h"
#include "defender.h"
#include "buttons.h"

sfMusic *music()
{
    sfMusic *music = sfMusic_createFromFile("./assets/musics/music_fond.ogg");
    return (music);
}

sfRenderWindow *create_window(program_t *param)
{
    sfVideoMode video_mode = {param->width, param->height, param->fps};
    return (sfRenderWindow_create(video_mode, param->window,
    sfDefaultStyle, NULL));
}

void create_start_menu(button_finish_t **every_buttons,
                        menu_finish_t *menu_finish)
{
    for (int i = 0; i < 12; i++) {
        every_buttons[i] = malloc(sizeof(button_finish_t) *
        (nbr_button[i] + 1));
        for (int t = 0; t < nbr_button[i]; t++) {
            every_buttons[i][t].position.x = 0;
            every_buttons[i][t].position.y = 0;
            create_button(&button_general[i][t], &every_buttons[i][t],
            nbr_button[i]);
        }
    }
    for (int i = 0; i < 2; i++) {
        create_menu(menu_game[i], &menu_finish[i]);
    }
}

void display_maps(game_t *struct_game, button_finish_t **every_button,
tower_map_t **tower_position, menu_finish_t *menu_finish)
{
    if (struct_game->script == LEVEL_1) {
        display_map_level_1(&struct_game->map_finish, &struct_game->map,
        struct_game);
        display_menu_level_1(struct_game, every_button, tower_position[0],
        menu_finish[1]);
    }
    if (struct_game->script == LEVEL_2) {
        display_map_level_2(&struct_game->map_finish, &struct_game->map,
        struct_game);
        display_menu_level_2(struct_game, every_button, tower_position[1],
        menu_finish[1]);
    }
    if (struct_game->script == LEVEL_3) {
        display_map_level_3(&struct_game->map_finish, &struct_game->map,
        struct_game);
        display_menu_level_3(struct_game, every_button, tower_position[2],
        menu_finish[1]);
    }
}

void boucle_game(game_t *struct_game, tower_map_t **tower_position,
                menu_finish_t *menu_finish, button_finish_t **every_button)
{
    sfTime time = sfClock_getElapsedTime(struct_game->clock);
    float seconds = time.microseconds / (1000000.0);

    if (seconds > 1.0) {
        if (struct_game->script == LEVEL_1) {
            level_1_tower(struct_game, tower_position,
                            menu_finish, every_button);
            }
        if (struct_game->script == LEVEL_2) {
            level_2_tower(struct_game, tower_position,
                            menu_finish, every_button);
            }
        if (struct_game->script == LEVEL_3) {
            level_3_tower(struct_game, tower_position,
                            menu_finish, every_button);
            }
    struct_game->counter.score += 5;
    sfClock_restart(struct_game->clock);
    }
}

int start_game(map_t *map)
{
    game_t struct_game;
    program_t param;
    button_finish_t **every_button = malloc(sizeof(button_finish_t *) * 13);
    menu_finish_t *menu_finish = malloc(sizeof(menu_finish_t) * 3);
    tower_map_t **tower_position = malloc(sizeof(tower_map_t *) * 3);
    struct_game.enemy = create_enemies(1);

    init_struct_game(&struct_game, &param, map);
    init_struct_tower_post(tower_position, map);
    build_map(map_level, &struct_game.map_finish);
    create_start_menu(every_button, menu_finish);
    mouse_cursor(&struct_game);
    sfRenderWindow_setFramerateLimit(struct_game.window, param.fps);
    while (sfRenderWindow_isOpen(struct_game.window)) {
        struct_game.time = sfTime_asMilliseconds(sfClock_getElapsedTime(struct_game.clock));
        math_delta(&struct_game);
        display_window(&struct_game, every_button, menu_finish,
        tower_position);
        display_maps(&struct_game, every_button, tower_position, menu_finish);
        display_enemies(struct_game.enemy, &struct_game);
        boucle_game(&struct_game, tower_position, menu_finish, every_button);
        struct_game.cursor.position = sfMouse_getPositionRenderWindow(struct_game.window);
        struct_game.cursor.position1.x = (float) struct_game.cursor.position.x;
        struct_game.cursor.position1.y = (float) struct_game.cursor.position.y;
        sfSprite_setPosition(struct_game.cursor.my_cursor, struct_game.cursor.position1);
        struct_game.prev_time = struct_game.time;
    }
    funct_free(struct_game, every_button, menu_finish, tower_position);
    return 0;
}
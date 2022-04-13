/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** handling_LEVEL_1
*/

#include "defender.h"
#include "tower.h"

int handling_level_click(game_t *struct_game,
                button_finish_t **every_button, sfVector2i mouse_click)
{
    int event_button = 1;

    for (int i = 0; i < nbr_button[LEVEL_1]; i++) {
        if (((mouse_click.x <= (int)
        (every_button[LEVEL_1][i].position.x + 100) &&
        (mouse_click.x >= (int) every_button[LEVEL_1][i].position.x))) &&
        ((mouse_click.y >= (int) every_button[LEVEL_1][i].position.y) &&
        (mouse_click.y <= (int) every_button[LEVEL_1][i].position.y + 100))) {
                event_button = i;
        }
    }
    return event_button;
}

void handling_level_menus_tower_opt(tower_map_t *tower_position, int j, game_t *struct_game)
{
    if (j == 2) {
        if (struct_game->money.money >= 125) {
            play_music_achat(struct_game);
            tower_position->tower_in_game = DIS_MENU_LEVEL_UP;
            tower_position->tower_level = TOWER_3_1;
            struct_game->money.money -= 125;
        }
    }
    if (j == 3) {
        if (struct_game->money.money >= 150) {
            play_music_achat(struct_game);
            tower_position->tower_in_game = DIS_MENU_LEVEL_UP;
            tower_position->tower_level = TOWER_4_1;
            struct_game->money.money -= 150;
        }
    }
}

void handling_level_menus_tower(sfVector2i mouse_click,
        button_finish_t **every_button, tower_map_t *tower_position, game_t *struct_game)
{
    for (int j = 0; j < 4; j++) {
        if (((mouse_click.x <= (int)
        (every_button[DIS_MENU_TOWER][j].position.x + 70) && (mouse_click.x >=
        (int) every_button[DIS_MENU_TOWER][j].position.x))) &&
        ((mouse_click.y >= (int) every_button[DIS_MENU_TOWER][j].position.y) &&
        (mouse_click.y <= (int)
        every_button[DIS_MENU_TOWER][j].position.y + 70))) {
            if (j == 0) {
                if (struct_game->money.money >= 75) {
                    play_music_achat(struct_game);
                    tower_position->tower_in_game = DIS_MENU_LEVEL_UP;
                    tower_position->tower_level = TOWER_1_1;
                    struct_game->money.money -= 75;
                }
            }
            if (j == 1) {
                if (struct_game->money.money >= 100) {
                    play_music_achat(struct_game);
                    tower_position->tower_in_game = DIS_MENU_LEVEL_UP;
                    tower_position->tower_level = TOWER_2_1;
                    struct_game->money.money -= 100;
                }
            }
            handling_level_menus_tower_opt(tower_position, j, struct_game);
        }
    }
}

void handling_level_menus_level_up(sfVector2i mouse_click,
                button_finish_t **every_button, tower_map_t *tower_position, game_t *struct_game)
{
    for (int j = 0; j < 2; j++) {
        if (((mouse_click.x <= (int)
        (every_button[DIS_MENU_LEVEL_UP][j].position.x + 70) &&
        (mouse_click.x >= (int)
        every_button[DIS_MENU_LEVEL_UP][j].position.x))) &&
        ((mouse_click.y >= (int)
        every_button[DIS_MENU_LEVEL_UP][j].position.y) &&
        (mouse_click.y <= (int)
        every_button[DIS_MENU_LEVEL_UP][j].position.y + 70))) {
            if (j == 1) {
                if (tower_position->tower_level == TOWER_1_1) {
                    if (tower_position->level == 2) {
                        struct_game->money.money += 75;
                    }
                    else if (tower_position->level == 3) {
                        struct_game->money.money += 100;
                    } else {
                        struct_game->money.money += 50;
                    }
                }
                if (tower_position->tower_level == TOWER_2_1) {
                    if (tower_position->level == 2) {
                        struct_game->money.money += 100;
                    }
                    else if (tower_position->level == 3) {
                        struct_game->money.money += 125;
                    } else {
                        struct_game->money.money += 75;
                    }
                }
                if (tower_position->tower_level == TOWER_3_1) {
                    if (tower_position->level == 2) {
                        struct_game->money.money += 125;
                    }
                    else if (tower_position->level == 3) {
                        struct_game->money.money += 150;
                    } else {
                        struct_game->money.money += 100;
                    }
                }
                if (tower_position->tower_level == TOWER_4_1) {
                    if (tower_position->level == 2) {
                        struct_game->money.money += 150;
                    }
                    else if (tower_position->level == 3) {
                        struct_game->money.money += 175;
                    } else {
                        struct_game->money.money += 125;
                    }
                }
                tower_position->tower_level = NO_TOWER;
                tower_position->tower_in_game = DIS_MENU_TOWER;
                tower_position->level = 0;
            } else if (tower_position->level < 2) {
                if (struct_game->money.money >= 20) {
                    play_music_achat(struct_game);
                    tower_position->level += 1;
                    struct_game->money.money -= 20;
                }
            }
        }
    }
}

void handling_level_1(button_finish_t **every_button, game_t *struct_game,
                    sfVector2i mouse_click, tower_map_t *tower_position)
{
    int event_button = handling_level_click(struct_game, every_button,
                        mouse_click);

    if (event_button == 0) {
        play_music_button(struct_game);
        struct_game->music.opt = 1;
        struct_game->script = DIS_MENU_PAUSE;
        return;
    }
    for (int i = 0; i < 5; i++) {
        if (tower_position[i].tower_in_game == DIS_MENU_TOWER) {
            handling_level_menus_tower(mouse_click, every_button,
            &tower_position[i], struct_game);
        }
        else if (tower_position[i].tower_in_game == DIS_MENU_LEVEL_UP) {
            handling_level_menus_level_up(mouse_click, every_button,
            &tower_position[i], struct_game);
        }
    }
}
/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_menu_LEVEL_1
*/

#include "defender.h"
#include "tower.h"

void click_mouse_level(sfVector2i mouse_click, game_t *struct_game,
                        button_finish_t **every_button)
{
    if (((mouse_click.x <= (int) (every_button[LEVEL_1][0].position.x + 180) &&
        (mouse_click.x >= (int) every_button[LEVEL_1][0].position.x))) &&
        ((mouse_click.y >= (int) every_button[LEVEL_1][0].position.y) &&
        (mouse_click.y <= (int) every_button[LEVEL_1][0].position.y + 120))) {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[LEVEL_1][0].sprite[1], NULL);
    } else {
        sfRenderWindow_drawSprite(struct_game->window,
        every_button[LEVEL_1][0].sprite[0], NULL);
    }
}

void click_tower_post(sfVector2i mouse_click, game_t *struct_game,
                    tower_map_t *tower_position, int i)
{
    if (((mouse_click.x <= (int) (tower_position[i].post_tower.x + 34) &&
        (mouse_click.x >= (int) tower_position[i].post_tower.x))) &&
        ((mouse_click.y >= (int) tower_position[i].post_tower.y) &&
        (mouse_click.y <= (int) tower_position[i].post_tower.y + 29))) {
            if (tower_position[i].tower_level == NO_TOWER) {
                sfSprite_setPosition(struct_game->map_finish.sprite[3],
                tower_position[i].post_tower);
                sfRenderWindow_drawSprite(struct_game->window,
                struct_game->map_finish.sprite[3], NULL);
            }
    }
}

void display_boat(tower_map_t *tower_position, menu_finish_t menu_finish,
                game_t *struct_game, int i)
{
    int compt = 120;

    tower_position[i].post_tower.x -= compt;
    tower_position[i].post_tower.y -= compt;
    sfSprite_setPosition(menu_finish.sprite, tower_position[i].post_tower);
    sfRenderWindow_drawSprite(struct_game->window, menu_finish.sprite, NULL);
    tower_position[i].post_tower.x += compt;
    tower_position[i].post_tower.y += compt;
}

void display_other(game_t *struct_game)
{
    draw_counter(struct_game);
    draw_money(struct_game);
}

void display_menu_level_1(game_t *struct_game, button_finish_t **every_button,
                        tower_map_t *tower_position, menu_finish_t menu_finish)
{
    sfVector2i m_click = sfMouse_getPositionRenderWindow(struct_game->window);

    click_mouse_level(m_click, struct_game, every_button);
    for (int i = 0; i < 5; i++) {
        click_tower_post(m_click, struct_game, tower_position, i);
        if (tower_position[i].tower_in_game == DIS_MENU_TOWER) {
            display_boat(tower_position, menu_finish, struct_game, i);
            display_menu_sold(struct_game, every_button[DIS_MENU_TOWER],
            m_click, tower_position[i]);
        }
        if (tower_position[i].tower_in_game == DIS_MENU_LEVEL_UP) {
            display_boat(tower_position, menu_finish, struct_game, i);
            display_menu_level_up(struct_game, every_button[DIS_MENU_LEVEL_UP],
            m_click, tower_position[i]);
        }
        display_tower(tower_position, i, struct_game);
    }
    display_other(struct_game);
    sfRenderWindow_drawSprite(struct_game->window, struct_game->life.sprite,
                            NULL);
}
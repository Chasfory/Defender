/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** display_menu_LEVEL_2
*/

#include "defender.h"
#include "tower.h"

void display_menu_level_2(game_t *struct_game, button_finish_t **every_button,
                        tower_map_t *tower_position, menu_finish_t menu_finish)
{
    sfVector2i m_click = sfMouse_getPositionRenderWindow(struct_game->window);

    click_mouse_level(m_click, struct_game, every_button);
    for (int i = 0; i < 8; i++) {
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
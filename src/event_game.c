/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** event_game
*/

#include "defender.h"
#include "tower.h"

void event_level_game(game_t *struct_game, button_finish_t **every_button,
                    tower_map_t **tower_position, sfVector2i mouse_click)
{
    if (struct_game->level == 1) {
        for (struct_game->j = 0; struct_game->j < 5; struct_game->j += 1) {
        event_button_menu_level_1(struct_game, every_button,
        tower_position, mouse_click);
        }
    }
    if (struct_game->level == 2) {
        for (struct_game->j = 0; struct_game->j < 8; struct_game->j += 1) {
        event_button_menu_level_2(struct_game, every_button,
        tower_position, mouse_click);
        }
    }
    if (struct_game->level == 3) {
        for (struct_game->j = 0; struct_game->j < 17; struct_game->j += 1) {
        event_button_menu_level_3(struct_game, every_button,
        tower_position, mouse_click);
        }
    }
}

void event_button_pressed(sfVector2i mouse_click, game_t *struct_game,
    button_finish_t **every_button, tower_map_t **tower_position)
{
    for (int i = 0; i < nbr_button[struct_game->script]; i++) {
        if (((mouse_click.x <= (int)
        (every_button[struct_game->script][i].position.x + 180) &&
        (mouse_click.x >= (int)
        every_button[struct_game->script][i].position.x))) &&
        ((mouse_click.y >= (int)
        every_button[struct_game->script][i].position.y) &&
        (mouse_click.y <= (int)
        every_button[struct_game->script][i].position.y + 120))) {
            sfRenderWindow_drawSprite(struct_game->window,
            every_button[struct_game->script][i].sprite[2], NULL);
            struct_game->click = 1;
        }
    }
    event_level_game(struct_game, every_button,
        tower_position, mouse_click);
    event_button_menu_tower(struct_game, every_button,
        tower_position, mouse_click);
}

void event_button_released(sfVector2i mouse_click, game_t *struct_game,
    tower_map_t **tower_position, button_finish_t **every_button)
{
    for (int i = 0; i < nbr_button[struct_game->script]; i++) {
            if (((mouse_click.x <= (int)
            (every_button[struct_game->script][i].position.x + 180) &&
            (mouse_click.x >= (int)
            every_button[struct_game->script][i].position.x))) &&
            ((mouse_click.y >= (int)
            every_button[struct_game->script][i].position.y) &&
            (mouse_click.y <= (int)
            every_button[struct_game->script][i].position.y + 120)) &&
            struct_game->click == 1) {
                menu_button(every_button, struct_game, mouse_click,
                tower_position);
            struct_game->click = 0;
        }
    }
}

void display_window(game_t *struct_game, button_finish_t **every_button,
                    menu_finish_t *menu_finish, tower_map_t **tower_position)
{
    sfVector2i mouse_click = sfMouse_getPositionRenderWindow
                            (struct_game->window);

    display_gameplay(struct_game, every_button, menu_finish, mouse_click);
    while (sfRenderWindow_pollEvent(struct_game->window,
    &struct_game->event)) {
        if (struct_game->event.type == sfEvtClosed)
            sfRenderWindow_close(struct_game->window);
        if (sfKeyboard_isKeyPressed(sfKeySpace) == sfTrue && struct_game->level != 0)
            struct_game->script = DIS_MENU_PAUSE;
        if (struct_game->event.type == sfEvtMouseButtonPressed)
            event_button_pressed(mouse_click, struct_game, every_button,
            tower_position);
        if (struct_game->event.type == sfEvtMouseButtonReleased)
            event_button_released(mouse_click, struct_game, tower_position,
            every_button);
    }
    sfRenderWindow_drawSprite(struct_game->window, struct_game->cursor.my_cursor, NULL);
    sfRenderWindow_display(struct_game->window);
    sfRenderWindow_clear(struct_game->window, sfBlack);
}
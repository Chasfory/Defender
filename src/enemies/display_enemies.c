/*
** EPITECH PROJECT, 2021
** display_enemies.c
** File description:
** only display the enmies stocked in the linked list
*/

#include "defender.h"
#include "enemies.h"

int get_frame(enemies_t *test, game_t *struct_game)
{
    test->refresh = test->refresh + struct_game;
    if (struct_game->script != DIS_MENU_PAUSE)
        move_level1(test);
    if (test->frame <= test->animation && test->refresh > 1500)
        test->frame++;
    if (test->frame > test->animation)
        test->frame = 0;
    if (test->refresh > 100)
        test->refresh = 0;
    return (test->frame);
}

void display_enemies(enemies_t *enemies, game_t *struct_game)
{
    sfVector2f scale = {0.9, 0.9};
    int i = 0;

    if (struct_game->level == 1) {
        for (enemies_t *test = enemies; test->next != NULL; test = test->next) {
            sfSprite_setPosition(test->sprite_e, test->pos_e);
            if (i++ == 0) {
                sfSprite_setPosition(test->sprite_e, test->pos_e);
                sfSprite_setScale(test->sprite_e, scale);
            }
            sfSprite_setTexture(test->sprite_e, test->texture_e, sfTrue);
            sfSprite_setTextureRect(test->sprite_e, get_rect(get_frame(test, struct_game) * test->frame_size
            , 0, test->frame_size, test->text_size.y));
            if (struct_game->script != DIS_MENU_PAUSE)
                sfRenderWindow_drawSprite(struct_game->window, test->sprite_e, NULL);
        }
    }
}
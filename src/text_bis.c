/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** text_bis
*/

#include "defender.h"
#include "tower.h"

void display_text_tower_1(game_t *struct_game,
                        button_finish_t *every_button, int i)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Tower that shoot stones.\n"
    "Causes 1 damage at level 1.\n"
    "Costs 75 coins.");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){1, 1});
    sfText_setPosition(help, every_button[i].position);
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_tower_2(game_t *struct_game,
                        button_finish_t *every_button, int i)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Tower that give money.\n"
    "Reports plus 10 per second.\n"
    "cost 100 coins");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){1, 1});
    sfText_setPosition(help, every_button[i].position);
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_tower_3(game_t *struct_game,
                    button_finish_t *every_button, int i)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Tower that cause a fire effect on\n"
    "enemies. Heal 1 life every second for\n"
    "3 seconds. Costs 125 coins.");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){1, 1});
    sfText_setPosition(help, every_button[i].position);
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_tower_4(game_t *struct_game,
                    button_finish_t *every_button, int i)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Tower that causes a\n"
    "slowing effect on enemies.\n"
    "Cost 150.");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){1, 1});
    sfText_setPosition(help, every_button[i].position);
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}
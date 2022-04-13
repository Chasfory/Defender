/*
** EPITECH PROJECT, 2021
** text.c
** File description:
** display the text in the menu
*/

#include "defender.h"
#include "tower.h"

void display_text_menu_help(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "This game is a defense game. You must defend the\n"
    "boat so that the animals do not get there. If not, it\'s lost !!!\n"
    "You defend thanks to the turrets that you can buy on the brown plates"
    "by\n clicking on them. You can pass your mouse over it in order to have\n"
    "precisions on the different laps");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){1, 1});
    sfText_setPosition(help, (sfVector2f){500, 350});
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_menu_principal(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "My_Defender");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){3, 3});
    sfText_setPosition(help, (sfVector2f){725, 200});
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_menu_option(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Settings");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){3, 3});
    sfText_setPosition(help, (sfVector2f){825, 200});
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_menu_pause(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Pause");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){3, 3});
    sfText_setPosition(help, (sfVector2f){875, 200});
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

void display_text_menu_level(game_t *struct_game)
{
    sfFont *Texture = sfFont_createFromFile("game_over.ttf");
    sfText *help = sfText_create();

    sfText_setString(help, "Level");
    sfText_setFont(help, Texture);
    sfText_setScale(help, (sfVector2f){3, 3});
    sfText_setPosition(help, (sfVector2f){890, 200});
    sfRenderWindow_drawText(struct_game->window, help, NULL);
}

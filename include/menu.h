/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** menu
*/

#ifndef MENU_H_
#define MENU_H_

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include "defender.h"

typedef struct menu_s {
    sfIntRect rect;
    sfVector2f position;
    sfVector2f scale;
    const char *texture;
} menu_t;

typedef struct menu_finish_s {
    sfTexture *menu;
    sfSprite *sprite;
    sfIntRect rect;
} menu_finish_t;

static const menu_t menu_principal = {
    (sfIntRect) {290, 0, 550, 350},
    (sfVector2f) {300, 100},
    (sfVector2f) {2.5, 2.5},
    "assets/menu/Menus.png",
};

static const menu_t menu_tower = {
    (sfIntRect) {0, 0, 400, 400},
    (sfVector2f) {0, 0},
    (sfVector2f) {0.7, 0.7},
    "assets/new/circle.png",
};

static const menu_t menu_game[] = {
    menu_principal,
    menu_tower,
};

#endif /* !MENU_H_ */

/*
** EPITECH PROJECT, 2021
** enemies.h
** File description:
** struct for enemies
*/

#ifndef ENEMIES_H
#define ENEMIES_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

typedef struct enemies_s {
    int life_e;
    sfTexture *texture_e;
    sfVector2u text_size;
    sfVector2f pos_e;
    sfIntRect rect_e;
    sfSprite *sprite_e;
    int frame_size;
    int frame;
    int animation;
    int refresh;
    int futur;
    struct enemies_s *next;
} enemies_t;

sfVector2f init_pos_level(int level);

sfIntRect get_rect(int left, int top, int width, int height);

void add_new_node(enemies_t **enemies, sfVector2f beginning);

void add_new_node_rino(enemies_t **enemies, sfVector2f beginning);

enemies_t *create_enemies(int level);

sfSprite *create_sprite(unsigned int x, unsigned int y, sfTexture *texture,
                        sfIntRect rect);

void move_level1(enemies_t *enemies);

#endif
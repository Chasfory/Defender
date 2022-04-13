/*
** EPITECH PROJECT, 2021
** add_new_node.c
** File description:
** create a new node with a new ennemie
*/

#include <stddef.h>
#include <stdlib.h>
#include "enemies.h"

void add_new_node(enemies_t **enemies, sfVector2f beginning)
{
    enemies_t *new = malloc(sizeof(enemies_t));

    new->life_e = 100;
    new->texture_e = sfTexture_createFromFile("./assets/Enemies/Chameleon/Run (84x38).png", NULL);
    new->text_size = sfTexture_getSize(new->texture_e);
    new->pos_e = beginning;
    new->rect_e = get_rect(0, 0, 672, 38);
    new->sprite_e = create_sprite(beginning.x, beginning.y, new->texture_e, new->rect_e);
    new->frame_size = 84;
    new->frame = 0;
    new->animation = 7;
    new->futur = 0;
    new->next = *enemies;
    *enemies = new;
}
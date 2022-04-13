/*
** EPITECH PROJECT, 2021
** add_new_node.c
** File description:
** create a new node with a new ennemie
*/

#include <stddef.h>
#include <stdlib.h>
#include "enemies.h"

void add_new_node_rino(enemies_t **enemies, sfVector2f beginning)
{
    enemies_t *new = malloc(sizeof(enemies_t));

    new->life_e = 150;
    new->texture_e = sfTexture_createFromFile("./assets/Enemies/Rino/Run (52x34).png", NULL);
    new->text_size = sfTexture_getSize(new->texture_e);
    new->pos_e = beginning;
    new->rect_e = get_rect(0, 0, 312, 34);
    new->sprite_e = create_sprite(beginning.x, beginning.y, new->texture_e, new->rect_e);
    new->frame_size = 52;
    new->frame = 0;
    new->animation = 5;
    new->futur = 0;
    new->next = *enemies;
    *enemies = new;
}
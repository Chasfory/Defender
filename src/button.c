/*
** EPITECH PROJECT, 2021
** defender
** File description:
** button
*/

#include "defender.h"
#include "tower.h"

void create_button(buttons_t const *button, button_finish_t *button_finish,
    int nbr_button)
{
    int i = 0;

    for (i = 0; button->texture[i] != NULL; i++) {
    button_finish->stade[i] = sfTexture_createFromFile(button->texture[i],
    NULL);
    button_finish->sprite[i] = sfSprite_create();
    sfSprite_setTexture(button_finish->sprite[i], button_finish->stade[i],
    sfTrue);
    sfSprite_setScale(button_finish->sprite[i], button->size);
    sfSprite_setPosition(button_finish->sprite[i], button->position);
    sfSprite_setTextureRect(button_finish->sprite[i], button->rect);
    }
    button_finish->compt_stade = i;
    button_finish->color = button->color;
    button_finish->rect = button->rect;
    button_finish->position = button->position;
}
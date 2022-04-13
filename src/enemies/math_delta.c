/*
** EPITECH PROJECT, 2021
** math_delta.c
** File description:
** determine delta
*/

#include "defender.h"

void math_delta(game_t *struct_game)
{
    struct_game->delta = struct_game->time - struct_game->prev_time;
    struct_game->delta = 16;
}

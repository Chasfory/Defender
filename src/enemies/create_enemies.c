/*
** EPITECH PROJECT, 2021
** create_enemies.c
** File description:
** create a linked_list for enemies
*/

#include <stddef.h>
#include "defender.h"
#include "enemies.h"

sfVector2f beginning_pos(sfVector2f pos, int nb)
{
    pos.y -= (38 * nb + 150);
    return (pos);
}

enemies_t *create_enemies(int level)
{
    sfVector2f position = init_pos_level(level);
    enemies_t *enemies = NULL;

    for (int nb = 0; nb <= ((level * 3) + 1); nb++) {
        if (nb < ((level * 3) + 1)) {
            position = beginning_pos(position, nb + 1);
            add_new_node(&enemies, position);
        }
        if (nb == ((level * 3) + 1)) {
            position = beginning_pos(position, nb + 6);
            position.x += 80;
            add_new_node_rino(&enemies, position);
        }
    }
    return (enemies);
}
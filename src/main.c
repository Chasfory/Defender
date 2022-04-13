/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** my_defender
*/

#include "defender.h"
#include "tower.h"

void free_map(map_t map)
{
    for (int i = 0; i < 38; i++) {
        free(map.level_1[i]);
        free(map.level_2[i]);
        free(map.level_3[i]);
    }
    free(map.level_1);
    free(map.level_2);
    free(map.level_3);
}

int main(int ac, char **av, char **env)
{
    map_t map;

    if (env == NULL)
        return (84);
    if (ac == 1) {
        map = level_to_str();
        start_game(&map);
        free_map(map);
    }
    else
        return (84);
    return 0;
}

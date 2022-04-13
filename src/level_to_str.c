/*
** EPITECH PROJECT, 2021
** level_to_str.c
** File description:
** return the level readed
*/

#include "tower.h"
#include "defender.h"

map_t level_to_str()
{
    map_t map = {NULL};

    map.level_1 = str_to_word_array(file_to_str(path_map[0]), '\n');
    map.level_2 = str_to_word_array(file_to_str(path_map[1]), '\n');
    map.level_3 = str_to_word_array(file_to_str(path_map[2]), '\n');
    return (map);
}
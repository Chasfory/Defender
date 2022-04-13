/*
** EPITECH PROJECT, 2021
** B-MUL-200-PAR-2-2-mydefender-laetitia.bousch
** File description:
** music_bis
*/

#include "defender.h"

void play_music_achat(game_t *struct_game)
{
    sfMusic_setPlayingOffset(struct_game->music.music[1], sfTime_Zero);
    if (struct_game->music.effect == 1) {
        sfMusic_pause(struct_game->music.music[1]);
    } else {
        sfMusic_play(struct_game->music.music[1]);
    }
}

void play_music_fond(game_t *struct_game)
{
    if ((struct_game->script != LEVEL_1 && struct_game->script != LEVEL_2 &&
    struct_game->script != LEVEL_3) || struct_game->music.music_play == 1 ||
    struct_game->music.opt == 1) {
        sfMusic_setLoop(struct_game->music.music[0], sfFalse);
        sfMusic_pause(struct_game->music.music[0]);
    } else {
        sfMusic_play(struct_game->music.music[0]);
        sfMusic_setLoop(struct_game->music.music[0], sfTrue);
    }
}
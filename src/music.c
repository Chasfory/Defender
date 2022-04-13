/*
** EPITECH PROJECT, 2021
** music.c
** File description:
** create the music and play it
*/

#include "defender.h"

void create_music(game_t *struct_game)
{
    for (int i = 0; i < 6; i++) {
        struct_game->music.music[i] = sfMusic_createFromFile(music_text[i]);
        sfMusic_setVolume(struct_game->music.music[i], 1);
    }
    struct_game->music.music_play = 0;
    struct_game->music.effect = 0;
    struct_game->music.opt = 0;
}

void play_music_button(game_t *struct_game)
{
    sfMusic_setPlayingOffset(struct_game->music.music[3], (sfTime){600000});
    if (struct_game->music.effect == 1) {
        sfMusic_pause(struct_game->music.music[3]);
    } else {
        sfMusic_play(struct_game->music.music[3]);
    }
}

void play_music_lose(game_t *struct_game)
{
    sfMusic_setPlayingOffset(struct_game->music.music[5], sfTime_Zero);
    if (struct_game->music.effect == 1) {
        sfMusic_pause(struct_game->music.music[5]);
    } else {
        sfMusic_play(struct_game->music.music[5]);
    }
}

void play_music_win(game_t *struct_game)
{
    sfMusic_setPlayingOffset(struct_game->music.music[4], sfTime_Zero);
    if (struct_game->music.effect == 1) {
        sfMusic_pause(struct_game->music.music[4]);
    } else {
        sfMusic_play(struct_game->music.music[4]);
    }
}

void play_music_tower(game_t *struct_game)
{
    sfMusic_setPlayingOffset(struct_game->music.music[2], sfTime_Zero);
    if (struct_game->music.effect == 1) {
        sfMusic_pause(struct_game->music.music[2]);
    } else {
        sfMusic_play(struct_game->music.music[2]);
    }
}
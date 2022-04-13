/*
** EPITECH PROJECT, 2021
** object.h
** File description:
** runner
*/

#ifndef PROGRAM_H
#define PROGRAM_H

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>

#include "defender.h"

typedef struct program_s {
    int width;
    int height;
    int fps;
    const char *window;
} program_t;

#endif /* !PROGRAM_H */
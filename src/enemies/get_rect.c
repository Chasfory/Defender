/*
** EPITECH PROJECT, 2021
** get_rect.c
** File description:
** define the rect for a texture
*/

#include <SFML/Graphics.h>

sfIntRect get_rect(int left, int top, int width, int height)
{
    sfIntRect rect;

    rect.left = left;
    rect.top = top;
    rect.width = width;
    rect.height = height;
    return (rect);
}
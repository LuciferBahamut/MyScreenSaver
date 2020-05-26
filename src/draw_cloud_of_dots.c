/*
** EPITECH PROJECT, 2019
** cloud_of_dots
** File description:
** my_screensaver
*/

#include "my.h"

void draw_cloud_of_dots(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int red = rand() % 255;
    int green = rand() % 255;
    int blue = rand() % 255;
    sfColor color = my_fromrgb(red, green, blue, 255);

    put_pixel(buffer, x, y, color);
}

void draw_stars(framebuffer_t *buffer)
{
    int x = rand() % 1920;
    int y = rand() % 1080;
    int red = 255;
    int green = 255;
    int blue = 255;
    sfColor color = my_fromrgb(red, green, blue, 255);

    put_pixel(buffer, x, y, color);
}

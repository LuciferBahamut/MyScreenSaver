/*
** EPITECH PROJECT, 2019
** put_pixels
** File description:
** my_screensaver
*/

#include "my.h"

sfColor my_fromrgb(sfUint8 red, sfUint8 green, sfUint8 blue, sfUint8 alpha)
{
    sfColor color;

    color.r = red;
    color.g = green;
    color.b = blue;
    color.a = alpha;

    return (color);
}

void put_pixel(framebuffer_t *buffer, unsigned int x, unsigned int y,
               sfColor color)
{
    if (x < 1920 && y < 1080 && x >= 0 && y >= 0) {
        x *= 4;
        y *= 4;
        buffer -> pixels[buffer -> width * y + x] = color.r;
        buffer -> pixels[buffer -> width * y + x + 1] = color.g;
        buffer -> pixels[buffer -> width * y + x + 2] = color.b;
        buffer -> pixels[buffer -> width * y + x + 3] = color.a;
    }
}

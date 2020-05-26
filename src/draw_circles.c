/*
** EPITECH PROJECT, 2019
** circles
** File description:
** my_screensaver
*/

#include "my.h"
#include <string.h>

void draw_circles(framebuffer_t *buffer, int rad, int id)
{
    sfVector2i center;
    int red = rand() % 255;
    int blue = rand() % 255;
    int green = rand() % 255;
    sfColor color = my_fromrgb(red, green, blue, 255);

    if (id == 3) {
        center.x = 1920 / 2;
        center.y = 1080 / 2;
    }
    if (id == 4) {
        center.x = rand() % 1920;
        center.y = rand() % 1080;
    }
    for (int i = center.y-rad; i <= center.y+rad; i++) {
        for (int j = center.x-rad; j <= center.x+rad; j++) {
            if (pow(j - center.x, 2) + pow(i - center.y, 2) <= pow(rad, 2))
                put_pixel(buffer, j, i, color);
        }
    }
}

/*
** EPITECH PROJECT, 2019
** gest_id
** File description:
** screensaver
*/

#include "my.h"

void gest_id(framebuffer_t *buffer, int id)
{
    if (id == 1)
        draw_cloud_of_dots(buffer);
    if (id == 2)
        draw_stars(buffer);
    if (id == 3)
        draw_circles(buffer, rand() % 1920, id);
    if (id == 4)
        draw_circles(buffer, rand() % 20, id);
}

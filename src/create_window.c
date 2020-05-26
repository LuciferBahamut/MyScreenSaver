/*
** EPITECH PROJECT, 2019
** create window
** File description:
** my_screensaver
*/

#include "my.h"

framebuffer_t *framebuffer_create(unsigned int w, unsigned int h)
{
    int lenbuff;
    framebuffer_t *buffer;
    sfUint8 *pixels;

    buffer = malloc(sizeof(*buffer));
    buffer -> width = w;
    buffer -> height = h;
    lenbuff = w * h * 4;
    pixels = malloc(sizeof(*pixels) *lenbuff);
    buffer -> pixels = pixels;
    for (unsigned int i = 0; i < lenbuff; i += 4) {
        buffer -> pixels[i] = 0;
        buffer -> pixels[i + 1] = 0;
        buffer -> pixels[i + 2] = 0;
        buffer -> pixels[i + 3] = 255;
    }
    return (buffer);
}

void display_window(sfVideoMode vm, sfRenderWindow *window,
                    framebuffer_t *buffer, int id)
{
    sfTexture *texture = sfTexture_create(1920, 1080);
    sfSprite *sprite = sfSprite_create();
    sfEvent event;

    sfRenderWindow_setFramerateLimit(window, 60);
    while (sfRenderWindow_isOpen(window)) {
        sfTexture_updateFromPixels(texture, buffer -> pixels, 1920, 1080, 0, 0);
        sfSprite_setTexture(sprite, texture, sfTrue);
        while (sfRenderWindow_pollEvent(window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        gest_id(buffer, id);
    }
}

int create_window(int id)
{
    sfVideoMode vm = {1920, 1080, 32};
    sfRenderWindow *win;
    framebuffer_t *buffer = framebuffer_create(1920, 1080);

    win = sfRenderWindow_create(vm, "My_screensaver", sfResize | sfClose, NULL);
    display_window(vm, win, buffer, id);
    sfRenderWindow_destroy(win);
    free(buffer);
    return (0);
}

/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** screensaver
*/

#ifndef MY_H_
#define MY_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <math.h>
#include <SFML/Config.h>
#include <SFML/Graphics.h>
#include "struc.h"

int my_atoi(char const *str);
void displayhelp(void);
int display_error(void);
int my_putstr(char const *str);
void my_putchar(char c);
int error_handling(int ac, char **av);
void display_id(void);
int create_window(int id);
void draw_circles(framebuffer_t *buffer, int rad, int id);
void draw_cloud_of_dots(framebuffer_t *buffer);
void draw_stars(framebuffer_t *buffer);
void gest_id(framebuffer_t *buffer, int id);
sfColor my_fromrgb(sfUint8 red, sfUint8 green, sfUint8 blue, sfUint8 alpha);
void put_pixel(framebuffer_t *buffer, unsigned int x,
               unsigned int y, sfColor color);

#endif

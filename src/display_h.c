/*
** EPITECH PROJECT, 2019
** display flag -h
** File description:
** screen saver
*/

#include "my.h"

void displayhelp(void)
{
    my_putstr("animation rendering in a CSML window.\n");
    my_putstr("\nUSAGE\n");
    my_putstr(" ./my_screensaver [OPTIONS] animation_id\n");
    my_putstr("  animation_id    ID of the animation to process (");
    my_putstr("between 1 and 20).");
    my_putstr("\n\nOPTIONS\n");
    my_putstr(" -d\t\t  print the description of ");
    my_putstr("all the animations and quit.");
    my_putstr("\n -h\t\t  print the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("  LEFT_ARROW\t  switch to the previous animation.\n");
    my_putstr("  RIGTH_ARROW\t  switch to the next animation.\n");
}

int display_error(void)
{
    my_putstr("./my_screensaver: bad arguments: 0 given but 1 is required\n");
    my_putstr("retry with -h\n");
    return (84);
}

void display_id(void)
{
    my_putstr("1: cloud of dots with random colors and positions\n");
    my_putstr("2: cloud of white dots with random positions\n");
    my_putstr("3: draw circles the size of teh screen whith random color\n");
    my_putstr("4: draw circles with random colors, positions and sizes\n");
}

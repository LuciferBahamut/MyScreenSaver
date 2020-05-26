/*
** EPITECH PROJECT, 2019
** main
** File description:
** screensaver
*/

#include "my.h"

int main(int ac, char **av)
{
    int id = my_atoi(av[1]);

    if (error_handling(ac, av) == 1)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        displayhelp();
        return (0);
    }
    if (av[1][0] == '-' && av[1][1] == 'd') {
        display_id();
        return (0);
    }
    create_window(id);
    return (0);
}

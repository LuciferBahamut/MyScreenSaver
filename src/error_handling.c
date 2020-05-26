/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** screensaver
*/

#include "my.h"

int error_handling(int ac, char **av)
{
    if (ac < 2) {
        display_error();
        return (1);
    }
    if (ac > 2)
        return (1);
    if (av[1][0] == '-' && av[1][1] == 'h' || av[1][1] == 'd')
        return (0);
    if (av[1][0] == '1' || av[1][0] == '2' ||
        av[1][0] == '3' || av[1][0] == '4')
        return (0);
    else
        return (1);
    return (0);
}

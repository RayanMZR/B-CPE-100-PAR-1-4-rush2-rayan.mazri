/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** rush2
*/

#include "include/my.h"

int main(int ac, char **av)
{
    if (ac < 3)
        return 84;
    if (ac >= 3) {
        for (int i = 0; ac - 2 > i; i++)
            rush2(av[1], av[i + 2][0]);
        search_language(av[1]);
    }
}

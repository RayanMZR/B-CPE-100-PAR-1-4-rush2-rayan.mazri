/*
** EPITECH PROJECT, 2022
** my_put_float
** File description:
** rush2
*/

#include "include/my.h"

void my_put_float(int nb)
{
    my_put_nbr(nb / 100);
    my_putchar('.');
    if (nb % 100 == 0)
        my_putstr("00");
    else
        my_put_nbr(nb % 100);
}

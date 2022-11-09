/*
** EPITECH PROJECT, 2022
** rush2_1
** File description:
** rush2
*/

#include "include/my.h"
#include <stdio.h>

void print_language(int english, int french, int german, int spanish)
{
    int i = 0;
    int j = 0;
    int k = 0;
    i = english > french ? english : french;
    j = german > spanish ? german : spanish;
    k = i > j ? i : j;
    if (k == english)
        my_putstr("=> English");
    if (k == french)
        my_putstr("=> French");
    if (k == german)
        my_putstr("=> German");
    if (k == spanish)
        my_putstr("=> Spanish");
}

int search_language(char *str)
{
    int english = 0;
    int french = 0;
    int german = 0;
    int spanish = 0;
    for (int a = 0; str[a] != '\0'; a++) {
        if (str[a] >= 65 && str[a] <= 90 || str[a] >= 97 && str[a] <= 122) {
            english += english_language(str[a]);
            french += french_language(str[a]);
            german += german_language(str[a]);
            spanish += spanish_language(str[a]);
        }
    }
    print_language(english, french, german, spanish);
    return 0;
}

static void print_value(char a, int count, int j)
{
    my_putchar(a);
    my_putchar(':');
    my_put_nbr(count);
    my_putstr(" (");
    my_put_float(j);
    my_putstr("%)\n");
}

void rush2(char *str, char a)
{
    int b;
    float count = 0;
    int i = 0;
    float k = 0;
    if (a >= 65 && a <= 90)
        b = a + 32;
    else
        b = a - 32;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == a || str[i] == b)
            count++;
    for (int j = 0; str[j] != '\0'; j++)
        if (str[j] >= 65 && str[j] <= 90 || str[j] >= 97 && str[j] <= 122)
            k++;
    int j = (count * 10000) / k;
    print_value(a, count, j);
}

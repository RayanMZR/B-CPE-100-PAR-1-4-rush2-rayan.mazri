/*
** EPITECH PROJECT, 2022
** language
** File description:
** rush2
*/

#include "include/my.h"

int english_language(char letter)
{
    int	i = 0;

    if (letter == 'b' || letter == 'j' || letter == 'k' || letter == 'p' ||
        letter == 'q' || letter == 'v' || letter == 'x' || letter == 'y' ||
        letter == 'z')
        i = 2;
    if (letter == 'c' || letter == 'f' || letter == 'g' || letter == 'm' ||
        letter == 'u' || letter == 'w')
        i = 4;
    if (letter == 'd' || letter == 'l' || letter == 'r')
        i = 10;
    if (letter == 'h' || letter == 'i' || letter == 'n' || letter == 's' ||
        letter == 'o')
        i = 15;
    if (letter == 'a' || letter == 't')
        i = 5;
    return i;
}

int french_language(char letter)
{
    int	i = 0;

    if (letter == 'b' || letter == 'f' || letter == 'g' || letter == 'h' ||
        letter == 'j' || letter == 'k' || letter == 'q' || letter == 'v' ||
        letter == 'w' || letter == 'x' || letter == 'y' || letter == 'z')
        i = 2;
    if (letter == 'c' || letter == 'd' || letter == 'm' || letter == 'p')
        i = 4;
    if (letter == 'l' || letter == 'o')
        i = 15;
    if (letter == 'r' || letter == 'u' || letter == 'a' || letter == 'i' ||
        letter == 'n' || letter == 's' || letter == 't')
        i = 10;
    return i;
}

int german_language(char letter)
{
    int	i = 0;

    if (letter == 'b' || letter == 'f' || letter == 'j' || letter == 'k' ||
        letter == 'p' || letter == 'q' || letter == 'v' || letter == 'w' ||
        letter == 'x' || letter == 'x' || letter == 'z')
        i = 2;
    if (letter == 'c' || letter == 'g' || letter == 'm' || letter == 'o')
        i = 4;
    if (letter == 'd' || letter == 'h' || letter == 'u')
        i = 10;
    if (letter == 'a' || letter == 'i' || letter == 't')
        i = 15;
    if (letter == 'n' || letter == 'o' || letter == 'r' || letter == 's')
        i = 5;
    return i;
}

int spanish_language(char letter)
{
    int i = 0;

    if (letter == 'f' || letter == 'g' || letter == 'h' || letter == 'j' ||
        letter == 'k' || letter == 'q' || letter == 'v' || letter == 'w' ||
        letter == 'x' || letter == 'y' || letter == 'z')
        i = 2;
    if (letter == 'b' || letter == 'm' || letter == 'p' || letter == 'u')
        i = 4;
    if (letter == 'c' || letter == 'd' || letter == 'l' || letter == 't')
        i = 10;
    if (letter == 'i' || letter == 'n' || letter == 'r')
        i = 12;
    if (letter == 'o' || letter == 's')
        i = 14;
    if (letter == 'a')
        i = 24;
    return i;
}

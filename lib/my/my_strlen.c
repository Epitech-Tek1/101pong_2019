/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen.c
*/

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i]; ++i);
    return (i);
}
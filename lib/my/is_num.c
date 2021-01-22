/*
** EPITECH PROJECT, 2019
** is_num
** File description:
** is_num.c
*/

int is_num(char c)
{
    return ('0' <= c && '9' >= c) ? (1) : (0);
}
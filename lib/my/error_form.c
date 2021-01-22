/*
** EPITECH PROJECT, 2019
** error_form
** File description:
** error_form.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "../../include/my.h"
#include "../../include/my_define.h"

int error_form(char *str, int *error, int i)
{
    if (!str[i])
        return (EXIT_SUCCESS);
    if (!is_num(str[i]) && str[i] != '.' && str[i] != '-')
        return (EXIT_FAILURE);
    if (str[i] == '.')
        error[0] += 1;
    if (str[i] == '-')
        error[1] += 1;
    if (error[0] > 1 || error[1] > 1)
        return (EXIT_FAILURE);
    return (error_form(str, error, i + 1));
}
/*
** EPITECH PROJECT, 2019
** error_handling
** File description:
** error_handling.c
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../../include/my_define.h"
#include "../../include/my.h"

int error_handling(int argc, char *argv[], int is_correct)
{

    if (argc > 8 || argc <= 7)
        return (EXIT_FAILURE);
    if (atoi(argv[7]) < 0)
        return (EXIT_FAILURE);

    for (int i = 0; i < my_strlen(argv[7]); i++)
        if(argv[7][i] < '0' || argv[7][i] > '9')
            return (EXIT_FAILURE);

    for (int y = 1; y < argc; ++y) {
        int error[] = {0, 0};
        is_correct = error_form(argv[y], error, 0);
        if (is_correct == 1)
            return (EXIT_FAILURE);
    }
    return (EXIT_SUCCESS);
}

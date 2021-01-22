/*
** EPITECH PROJECT, 2019
** 101pong
** File description:
** 101pong.c
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my_define.h"
#include "../include/my.h"

int pong(double x0, double y0, double z0, double x1, double y1, double z1, int n)
{
    double vx = x1 - x0;
    double vy = y1 - y0;
    double vz = z1 - z0;
    double cosinus = acos(sqrt(pow(vx, 2) + pow(vy, 2)) / sqrt(pow(vx, 2) + pow(vy, 2) + pow(vz, 2)));
    int position_is_correct;

    printf("The velocity vector of the ball is:\n");
    printf("(%.2f, %.2f, %.2f)\n", vx, vy, vz);
    printf("At time t + %i, ball coordinates will be:\n", (n));
    printf("(%.2lf, %.2lf, %.2lf)\n", (x1 + n * vx), (y1 + n * vy), (z1 + n * vz));
    position_is_correct = error_position(x0, y0, z0, x1, y1, z1);
    if (position_is_correct >= 1) {
        if (position_is_correct == 2) {
            printf("The incidence angle is:\n0.00 degrees\n");
            return (EXIT_SUCCESS);
        }
        printf("The incidence angle is:\n%.2lf degrees\n", ((cosinus * 360) / (2 * M_PI)));
        return (EXIT_SUCCESS);
    }
    printf("The ball won't reach the paddle.\n");
    return (EXIT_SUCCESS);
}

int main(int argc, char *argv[])
{
    int form_not_correct;

    form_not_correct = error_handling(argc, argv, 0);
    if (form_not_correct)
        return (84);
    pong(atof(argv[1]), atof(argv[2]), atof(argv[3]), atof(argv[4]), atof(argv[5]), atof(argv[6]), atoi(argv[7]));
    return (EXIT_SUCCESS);
}

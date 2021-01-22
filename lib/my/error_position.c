/*
** EPITECH PROJECT, 2019
** error_position
** File description:
** error_position.c
*/

int error_position(double x0, double y0, double z0, double x1, double y1, double z1)
{
    if (z0 == 0 && z1 == 0)
        return (2);
    if (z0 >= z1 && z0 < 0)
        return (0);
    if (z0 <= z1 && z0 > 0)
        return (0);
    if (z0 > 0 && z1 < 0)
        return (0);
    if (z0 < 0 && z1 > 1)
        return (0);
    return (1);
}

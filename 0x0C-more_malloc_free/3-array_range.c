#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - array initialize
 * @min: min int
 * @max: max int
 * Return: int*
 */

int *array_range(int min, int max)
{
    if (min > max)
        return (NULL);
    int *p;
    p = malloc((max - min + 1) * sizeof(int));
    if (p == NULL)
        return (NULL);
    int x = 0;
    while (min <= max)
    {
        p[x] = min;
        x++;
        min++;
    }
    return (p);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void simple_print_buffer(int *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int *a;

    a = array_range(0, 10);
    simple_print_buffer(a, 11);
    free(a);
    return (0);
}
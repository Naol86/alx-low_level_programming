#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory address
 * @b: int
 * Return: void*
 */

void *malloc_checked(unsigned int b)
{
    void *temp;

    temp = malloc(b);
    if (temp == NULL)
        exit(98);
    return (temp);
}

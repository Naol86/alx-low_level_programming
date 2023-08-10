#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - array
 * @pnmemb: int
 * @size: int
 * Return: void*
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == 0 || size == 0)
        return (NULL);

    void *p;
    p = malloc(nmemb * size);
    if (p == NULL)
        return (NULL);

    return (p);
}

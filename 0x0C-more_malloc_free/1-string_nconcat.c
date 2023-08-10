#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * @n: int
 * Return: char*
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *p;
    int temp = 0;
    int x = strlen(s1);
    p = malloc(x + n);
    if (p == NULL)
        return (NULL);
    int a = 0;
    while (a < (x + n))
    {
        if (a < x)
        {
            *(p + (a)) = (*(s1 + a));
            a++;
        }
        else
        {
            *(p + a) = (*(s2 + temp));
            a++;
            temp++;
        }
    }
    *(p + a) = '\0';
    return (p);
}

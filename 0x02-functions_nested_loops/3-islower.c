#include "main.h"
#include <stdio.h>
/**
 * _islower - check if lower
 * @c: char
 * Return: 0
 */
int _islower(int c)
{
int a;
a = islower(c);

if (a == 0)
{
return (0);
}

return (1);
}

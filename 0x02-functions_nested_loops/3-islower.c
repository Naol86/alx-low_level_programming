#include "main.h"
/**
 * _islower - check if lower
 * @c: char
 * Return: 0
 */
int _islower(int c)
{
if (c > 64 && c < 91)
{
return (0);
}
return (1);
}
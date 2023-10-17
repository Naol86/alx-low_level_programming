#include "main.h"
/**
 * _isalpha - isalpha
 * @c: int
 * Return: c
 */

int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c > 64 && 91))
{
return (1);
}
return (0);
}

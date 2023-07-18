#include "main.h"

/**
 * print_to_98 - print 98
 * 
 * @n: int
 * Return: void
 */

void print_to_98(int n)
{
while (n != 98)
{
_putchar(n);
_putchar(44);
_putchar(32);
if (n > 98)
{
n--;
}
else
{
n++;
}
}
_putchar(98);
}

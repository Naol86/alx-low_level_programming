#include "main.h"
/**
 * print_triangle - printing triangle
 * @size: int
 */
void print_triangle(int size)
{
int i;
int j;
for (i = 1; i <= size; i++)
{
for (j = size - 1; j >= 0; j--)
{
if (j < i)
{
_putchar('#');
}
else
{
_putchar(' ');
}
}
_putchar(10);
}
if (size <= 0)
_putchar(10);
}

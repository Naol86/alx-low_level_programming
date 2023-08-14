#include "main.h"
/**
 * print_diagonal - print space diagonally
 * @n: int
 */
void print_diagonal(int n)
{
int i;
int j;
for (j = 0; j < n; j++)
{
for (i = 0; i < j; i++)
_putchar(32);
_putchar(92);
_putchar(10);
}
if (n <= 0)
_putchar(10);
}

#include "main.h"
/**
 * times_table - prints small letter
 *
 * Return: void
 *
 */
void times_table(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if ((i * j) > 9)
{
int b = (int)((i * j) % 100) / 10;

_putchar(b + '0');
_putchar((i * j) % 10 + '0');
if ((j + 1) != 10)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((i * j) + '0');
if ((i * (j + 1)) >= 10 && (j + 1) < 10)
{
_putchar(',');
_putchar(' ');
}
else if ((j + 1) != 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
}
_putchar('\n');
}
}

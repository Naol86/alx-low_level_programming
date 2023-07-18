#include "main.h"

/**
 * times_table - 9 multiple
 * Return: void
 */

void times_table(void)
{
int i;
int j;
int ans;
int a;
int b;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
ans = i * j;
a = ans / 10;
b = ans % 10;
if (a != 0)
{
_putchar(48 + a);
}
if (ans < 10 && j != 9)
{
_putchar(' ');
}
_putchar(48 + b);
if (j != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar(10);
}
}

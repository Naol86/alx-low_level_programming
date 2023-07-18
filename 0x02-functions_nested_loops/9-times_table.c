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
putchar(48 + a);
}
if (ans < 10 && j != 9)
{
putchar(' ');
}
putchar(48 + b);
if (j != 9)
{
putchar(44);
putchar(32);
}
}
putchar(10);
}
}

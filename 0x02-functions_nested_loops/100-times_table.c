#include "main.h"

/**
 * print_times_table - printing table
 * @n: int
 */

void print_times_table(int n)
{
int i;
int j;

for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
int ans = i * j;
int a = ans / 100;
int b = (ans % 100) / 10;
int c = ans % 10;
int space = 4;
if (j != 0)
{
if (ans < 10)
space = 1;
else if (ans < 100)
space = 2;
else if (ans < 1000)
space = 3;
else
space = 4;
}
for (; space < 4; space++)
_putchar(' ');
if (a != 0)
putchar(48 + a);
if (b != 0 || a != 0)
putchar(48 + b);
if (c != 0 || b != 0)
putchar(48 + c);
if (j != n)
putchar(',');
if (j != n)
_putchar(',');
}
_putchar('\n');
}
}

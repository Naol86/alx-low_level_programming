#include "main.h"
/**
 * more_numbers - printing more numbers
 */
void more_numbers(void)
{
int i = 0;
int x;
int y = 0;
for (; y < 10; y++)
{
for (; i < 14; i++)
{
if (i > 9)
_putchar(49);
x = i % 10;
_putchar(48 + x);
}
_putchar(10);
}
}

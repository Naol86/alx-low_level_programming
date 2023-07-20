#include "main.h"
/**
 * more_numbers - printing more numbers
 */
void more_numbers(void)
{
int i;
int x;
int y;
for (y = 0; y < 10; y++)
{
for (i = 0; i < 15; i++)
{
if (i > 9)
_putchar(49);
x = i % 10;
_putchar(48 + x);
}
_putchar(10);
}
}

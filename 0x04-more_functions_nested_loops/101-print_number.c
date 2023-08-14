#include "main.h"

/**
 * print_number - it prints an integer
 *
 * @n: nubmber to be printed
 */
void print_number(int n)
{
unsigned int num;

if (n < 0)
{
num = -n;
_putchar('-');
}
else
{
num = n;
}

if (num / 10 != 0)
{
print_number(num / 10);
}

_putchar((num % 10) + '0');
}

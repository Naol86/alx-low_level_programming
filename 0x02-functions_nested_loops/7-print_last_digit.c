#include "main.h"

/**
 * print_last_digit - printing last digit
 * @n: int
 * Return: int
 */

int print_last_digit(int n)
{
int last;
last = n % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(48 + last);
return (last);
}

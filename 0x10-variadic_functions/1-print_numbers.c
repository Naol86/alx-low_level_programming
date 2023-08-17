#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * power - 10 power of a number
 * @x: 10 pow x
 * Return: int
 */
int power(int x)
{
unsigned int po = 1, k;
for (k = 0; k < (x); k++)
po *= 10;
return (po);
}
/**
 * print_digit - print each digit
 * @x: number
 */
void print_digit(int x)
{
unsigned int digit, temp = x, j, ans, count = 1;
while (temp > 9)
{
digit = temp % 10;
count += 1;
temp /= 10;
}
for (j = 1; j <= count; j++)
{
ans = x / power(count - j);
ans %= 10;
_putchar('0' + ans);
}
}
/**
 * print_numbers - print number
 * @separator: separator is char to sepator numbers
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int temp;
va_list list;

va_start(list, n);

for (int i = 0; i < n; i++)
{
temp = va_arg(list, int);
if (temp < 0)
_putchar('-');
temp = abs(temp);
print_digit(temp);
if (i != n - 1)
{
_putchar(separator[0]);
_putchar(separator[1]);
}
}
va_end(list);
}

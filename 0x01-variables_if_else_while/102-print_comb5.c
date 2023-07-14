#include <stdio.h>

/**
 * main - combination
 *
 * Return: 0.
 */
int main(void)
{
int num;
int num1;
int num2;
int num3;

for (num = 0; num < 10; num++)
{
for (num1 = 0; num1 < 10; num1++)
{
for (num2 = 0; num2 < 10; num2++)
{
for (num3 = num1 + 1; num3 < 10; num3++)
{
putchar((num % 10) + '0');
putchar((num1 % 10) + '0');
putchar(' ');
putchar((num2 % 10) + '0');
putchar((num3 % 10) + '0');
if (num1 == 8 && num == 9 && num2 == 9)
{
break;
}
putchar(',');
putchar(' ');
}
}
if (num == 9 && num1 == 8 && num2 == 9)
{
break;
}
}
if (num == 7 && num1 == 8 && num2 == 9)
{
break;
}
}
putchar(10);
return (0);
}

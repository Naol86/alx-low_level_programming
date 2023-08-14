#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 *
 * Return: Always 0
 */
int main(void)
{
int i;
long int a;
long int b;
long int next;
long int sum;

a = 1;
b = 2;
sum = 0;

for (i = 1; i <= 33; ++i)
{
if (a < 4000000 && (a % 2) == 0)
{
sum = sum + a;
}
next = a + b;
a = b;
b = next;
}

printf("%lu\n", sum);
return (0);
}

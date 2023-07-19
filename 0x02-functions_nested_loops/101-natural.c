#include "main.h"
#include <stdio.h>

/**
 * print_sum - print summation
 */
void print_sum(void)
{
int sum = 0;
int i = 0;
for (; i < 1024; i++)
{
if (i % 3 == 0)
{
sum += i;
continue;
}
else if (i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
}

/**
 * main - starting point
 * Return: 0
 */

int main(void)
{
print_sum();
return (0);
}

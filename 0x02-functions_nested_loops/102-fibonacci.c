#include "main.h"
#include <stdio.h>
/**
 * fibonacci - printing fibonacci number
 */
void fibonacci(void)
{
long int a = 1;
long int b = 1;
int i = 0;
long int temp;
for (i; i < 50; i++)
{
if (i == 0 || i == 1)
printf("%d", a);
else if (i > 1)
{
printf("%ld", a + b);
temp = a + b;
a = b;
b = temp;
}
if (i != 49)
{
printf("%c", ',');
printf("%c", ' ');
}
}
printf("%c", '\n');
}
/**
 * main - starting point
 * Return: 0
 */
int main(void)
{
fibonacci();
return (0);
}

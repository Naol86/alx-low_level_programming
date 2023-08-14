#include <stdio.h>

/**
 * main - by using putchar that print char by their ascii code
 *
 * Return: 0
 */

int main(void)
{
int i = 97;
for (; i < 123; i++)
{
putchar(i);
}
putchar(10);
return (0);
}

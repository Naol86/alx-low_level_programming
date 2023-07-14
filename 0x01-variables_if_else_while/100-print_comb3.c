#include <stdio.h>
/**
 * main - combinations of two number
 * Return: 0
 */

int main(void)
{
int i = 48;
int j;
for (; i < 58; i++)
{
j = i + 1;
for (; j < 58; j++)
{
putchar(i);
putchar(j);
if (i != 56)
{
putchar(44);
putchar(32);
}
}
}
return (0);
}

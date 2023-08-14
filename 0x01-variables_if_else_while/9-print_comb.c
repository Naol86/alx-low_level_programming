#include <stdio.h>
/**
 * main - print numbers
 * Return: 0
 */
int main(void)
{
int i = 48;
for (; i < 58; i++)
{
putchar(i);
if (i < 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}

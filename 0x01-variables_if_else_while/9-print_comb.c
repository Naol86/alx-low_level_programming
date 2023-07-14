#include <stdio.h>
/**
 * main - print numbers
 * Return: 0
 */
int main(void)
{
for (int i = 48; i < 58; i++)
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

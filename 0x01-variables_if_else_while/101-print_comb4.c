#include <stdio.h>
/**
 * main - combinations of three number
 * Return: 0
 */
int main(void)
{
int i = 48;
int j;
int k;
for (; i < 58; i++)
{
j = i + 1;
for (; j < 58; j++)
{
k = j + 1;
for (; k < 58; k++)
{
putchar(i);
putchar(j);
putchar(k);
if (i < 55)
{
putchar(44);
putchar(32);
}
}
putchar(32);
}
}
putchar(32);
return (0);
}

#include<stdio.h>

/**
 * main - printing letters
 * Return: 0
 */

int main(void)
{
int i = 97;
int j = 65;
for (; i < 123; i++)
putchar(i);
for (; j < 91; j++)
putchar(j);
putchar(10);
return (0);
}

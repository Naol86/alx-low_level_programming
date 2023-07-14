#include<stdio.h>

/**
 * main - printing letters
 * Return: 0
 */

int main(void)
{
int i = 97;
for (; i < 123; i++)
putchar(i);
for (int i = 65; i < 91; i++)
putchar(i);
putchar(10);
return (0);
}

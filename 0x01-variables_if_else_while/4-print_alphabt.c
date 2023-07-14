#include <stdio.h>

/**
 * main - print small letters except e and q
 * Return: 0
 */

int main(void)
{
int i = 97;
for (; i < 123; i++)
if (i != 101 && i != 113)
putchar(i);
putchar(10);
return (0);
}

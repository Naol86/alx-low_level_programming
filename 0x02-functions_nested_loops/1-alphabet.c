#include <stdio.h>
/**
 * main - print alphabet
 * Return: 0
 */

void print_alphabet(void);

int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - print alphabet function
 * Return: void
 */

void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}
putchar(10);
}

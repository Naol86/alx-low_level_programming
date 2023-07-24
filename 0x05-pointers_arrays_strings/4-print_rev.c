#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 */

void print_rev(char *s)
{
int len = 0;
while (*(s + len) != '\0')
{
len++;
}
int i;
char temp;
for (i = len - 1; i >= 0; i--)
{
temp = *(s + i);
_putchar(temp);
}
_putchar(10);
}

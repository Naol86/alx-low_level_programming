#include "main.h"

/**
 * _puts - print string
 * @str: string
 */

void _puts(char *str)
{
int count;

count = 0;
while (str[count] != '\0')
{
_putchar(str[count]);
count++;
}
_putchar('\n');
}

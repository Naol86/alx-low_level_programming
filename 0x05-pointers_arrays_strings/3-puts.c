#include "main.h"

/**
 * _puts - print string
 * @str: string
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
}
_putchar(10);
}
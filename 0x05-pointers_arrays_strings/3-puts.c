#include "main.h"

/**
 * _puts - print string
 * @str: string
 */

void _puts(char *str)
{
int i = 0;
char temp;
while (*(str + i) != '\0')
{
temp = *(str + i++);
_putchar(temp);
}
_putchar(10);
}

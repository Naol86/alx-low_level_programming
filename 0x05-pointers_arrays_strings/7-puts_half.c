#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
int len = 0;
int mid;
while (*(str + len) != '\0')
{
len++;
}
if (len % 2 == 0)
mid = len / 2;
else
mid = (len - 1) / 2;
while (mid < len)
{
_putchar(*(str + mid++));
}
_putchar(10);
}

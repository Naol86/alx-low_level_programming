#include "main.h"

/**
 * puts2 - print char in even index
 * @str: string
 */

void puts2(char *str)
{
int i = 0;
for (; *(str + i) != '\0'; i++)
{
if (i % 2 == 0)
_putchar(*(str + i));
}
_putchar(10);
}

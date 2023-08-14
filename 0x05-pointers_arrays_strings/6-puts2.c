#include "main.h"

/**
 * puts2 - print char in even index
 * @str: string
 */

void puts2(char *str)
{
int i = 0;
char temp;
for (; *(str + i) != '\0'; i++)
{
temp = *(str + i);
if (i % 2 == 0)
_putchar(temp);
}
_putchar(10);
}

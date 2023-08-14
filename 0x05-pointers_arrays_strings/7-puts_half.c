#include "main.h"

/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
int count;
int i;
int j;

count = 0;
while (str[count] != '\0')
{
count++;
}
if (count % 2 == 0)
{
for (i = count / 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
}
else if (count % 2)
{
for (j = (count - 1) / 2; j < count - 1; j++)
{
_putchar(str[j + 1]);
}
}
_putchar('\n');
}

#include "main.h"

/**
 * _print_rev_recursion - print string in reverse order
 * @s: *char
 */

void _print_rev_recursion(char *s)
{
char temp = *s;
if (*s != '\0')
{
s++;
_print_rev_recursion(s);
_putchar(temp);
}
}

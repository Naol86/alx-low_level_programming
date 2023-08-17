#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_each_string - print each string
 * @s: string
 */

void print_each_string(char *s)
{
int i = 0;
while (s[i])
{
_putchar(s[i]);
i++;
}
}

/**
 * print_strings - print array of strings
 * @separator: separated by separator
 * @n: size of array
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
va_list list;

va_start(list, n);

for (i = 0; i < n; i++)
{
print_each_string(va_arg(list, char *));
if (i != n - 1)
{
_putchar(separator[0]);
_putchar(separator[1]);
}
}
va_end(list);
}

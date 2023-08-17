#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summation of all arguments
 * @n: size of argument
 * Return: the summation
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int summation = 0;
unsigned int i;
unsigned int temp;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
{
temp = va_arg(list, int);
summation += temp;
}
va_end(list);

return (summation);
}

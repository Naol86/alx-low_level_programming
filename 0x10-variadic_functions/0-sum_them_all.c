#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - summation of all arguments
 * @n: size of argument
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
int summation = 0, i;
va_list list;
va_start(list, n);

for (i = 0; i < n; i++)
summation += va_arg(list, int);

va_end(list);

return (summation);
}

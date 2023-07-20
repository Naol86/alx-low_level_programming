#include "main.h"
/**
 * print_numbers - printing a number form 0 to 9 followed by newline
 */
void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(48 + i);
}
_putchar(10);
}

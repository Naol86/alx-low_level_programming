#include <stdio.h>
#include "main.h"

/**
 * print_name - print name
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}

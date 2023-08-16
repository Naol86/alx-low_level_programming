#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name to the fuction it recived
 * @name: the name to be printed
 * @f: the fuction pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}

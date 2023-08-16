#include <stdio.h>
#include "main.h"

/**
 * array_iterator - print elements of array
 * @array: array
 * @size: size of array
 * @action: function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
if (!array || !action)
return;
for (i; i < size; i++)
{
action(array[i]);
}
}

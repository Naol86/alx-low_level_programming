#include <stdio.h>
#include "main.h"

/**
 * int_index - index
 * @array: array
 * @size: size
 * @cmp: function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
for (i; i < size; i++)
{
int temp = cmp(array[i]);
if (array != 0)
{
return (i);
}
}
return (-1);
}

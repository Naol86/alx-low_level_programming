#include "search_algos.h"

/**
 * linear_search : search for a value in array in linear time
 * @array: head of array 
 * @size: size of array
 * @value: value to search for
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int i;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]", i, array[i]);
        if (array[i] == value) {
            return (i);
        }
    }

    return (-1);
}

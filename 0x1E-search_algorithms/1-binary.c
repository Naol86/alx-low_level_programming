#include "search_algos.h"

/**
 * binary_search - search through array using binary algorithm
 * @array: head of array
 * @size: size of array
 * @value: value to find in array
 * Return: int
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_list(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

/**
 * print_list - print array elements
 * @arr: head of array
 * @left: left
 * @right: right
 */
void print_list(int *arr, size_t left, size_t right)
{
	size_t i;

	if (arr != NULL)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf(" %d", arr[i]);
			if (i != right)
				printf(",");
		}
		printf("\n");
	}
}

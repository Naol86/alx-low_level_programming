#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 0, binary_search(array, size, 0));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 9, binary_search(array, size, 9));
    return (EXIT_SUCCESS);
}

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
#include "search_algos.h"

void print_list(int *arr, size_t left, size_t right)
{
    size_t i;

    if (arr != NULL)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
        {
            printf(" %d", arr[i]);
            if (i != right)
                printf(",");
        }
        printf("\n");
    }
}

#include "main.h"

/**
 * reverse_array - reversing array
 * @a: *int
 * @n: int
 */

void reverse_array(int *a, int n)
{
int temp[n];
int i = 0;
int j = n - 1;
for (; j >= 0; j--)
{
temp[i] = a[j];
i++;
}
for (i = 0; i < n; i++)
{
a[i] = temp[i];
}
}

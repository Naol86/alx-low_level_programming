#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the board
 *@a: the array
 *@size: the size of the array
 */
void print_diagsums(int *a, int size)
{
int i;
unsigned int mdiagonal = 0;
unsigned int ldiagonal = 0;

for (i = 0; i < size; i++)
{
mdiagonal += a[(size * i) + i];
ldiagonal += a[(size * (i + 1)) - (i + 1)];
}
printf("%d, %d\n", mdiagonal, ldiagonal);
}

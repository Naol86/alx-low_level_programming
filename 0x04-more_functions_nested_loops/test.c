// #include "main.h"
#include <stdio.h>
/**
 * more_numbers - printing more numbers
 */
void print_square(int size)
{
    int i;
    int j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            putchar('#');
        }
        putchar(10);
    }
    if (size == 0)
    putchar(10);
}

int main(void)
{
    print_square(0);
    return (0);
}
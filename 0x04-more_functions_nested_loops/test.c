// #include "main.h"
#include <stdio.h>
/**
 * more_numbers - printing more numbers
 */
void print_triangle(int size)
{
    int i;
    int j;
    for (i = 1; i <= size; i++)
    {
        for (j = size-1; j >= 0; j--)
        {
            if (j < i)
            {
                putchar('#');
            }
            else
            {
                putchar(' ');
            }
        }
        putchar(10);
    }
    if (size <= 0)
        putchar(10);
}

int main(void)
{
    print_triangle(1);
    return (0);
}
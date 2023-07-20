// #include "main.h"
#include <stdio.h>
/**
 * more_numbers - printing more numbers
 */
void more_numbers(void)
{
    int i;
    int x;
    int y;
    for (y = 0; y < 10; y++)
    {
        for (i = 0; i < 15; i++)
        {
            if (i > 9)
                putchar(49);
            x = i % 10;
            putchar(48 + x);
        }
        putchar(10);
    }
}

int main(void)
{
    more_numbers();
    return (0);
}
#include <stdio.h>

void print_to_98(int n)
{
    while (n != 98)
    {
        _putchar(n);
        _putchar(44);
        _putchar(32);
        if (n > 98){
            n--;
        }
        else{
            n++;
        }
    }
    _putchar(98);
}

int main(void)
{
    int a;
    times_table();
    return (0);
}
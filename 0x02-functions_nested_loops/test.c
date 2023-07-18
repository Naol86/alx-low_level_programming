#include <stdio.h>

int print_last_digit(int n)
{
    int last;
    last = n%10;
    return (last);
}

int main(void)
{
    int a;
    a = print_last_digit(-1234);
    printf("%d",a);
    return (0);
}
#include <stdio.h>

int _abs(int n)
{
    if ( n >= 0)
    {
        return (n);
    }
    return (n*-1);
}

int main(void)
{
    int a;
    a = _abs(0);
    printf("%d",a);
    return (0);
}
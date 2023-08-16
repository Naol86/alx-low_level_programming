#include <stdio.h>

void function(int x)
{
    printf("the value of x is %d\n",x);
}

int main(void)
{
    void (*test_pointer)(int) = &function ;
    test_pointer(10);
}
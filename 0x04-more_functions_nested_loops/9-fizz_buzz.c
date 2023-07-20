#include "main.h"
#include <stdio.h>

void FizzBuzz(void)
{
    int i;
    for (i=1;i<101;i++){
        if (i%3==0)
        printf("%s","Fizz");
        if(i%5==0)
        printf("%s", "Buzz");
        if(i%3 !=0 && i%5!=0)
        printf("%d",i);
        if (i!=100)
        printf("%s"," ");
    }
    putchar(10);
}

int main(void)
{
    FizzBuzz();
    return (0);
}

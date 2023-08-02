#include <stdio.h>
#include "main.h"


int test_prime(int num,int index,int start);

int is_prime_number(int n)
{
    int temp=n;
    int sqrt;
    int ans;
    if (n<2){
        return (0);
    }
    sqrt = temp/2;
    if(sqrt!=-1){
        ans = test_prime(n,sqrt,2);
        return (ans);
    }
    else
        temp++;

}

int test_prime(int num,int index,int start)
{
    if(num%start==0){
        return (0);
    }
    else if (index<start){
        return (1);
    }
    start++;
    return (test_prime(num,index,start));
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}
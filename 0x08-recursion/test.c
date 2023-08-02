#include <stdio.h>
#include "main.h"

int length(char *s){
    int x=0;
    while (s[x]!='\0')
    {
        x++;
    }
    return (x);
}

int is_palindrome(char *s)
{
    int len = length(s);
    int mid = len/2;
    int x=0;
    len--;
    while(x<mid){
        if (s[x]!=s[len-x])
            return (0);
        x++;
    }
    return (1);
}

int main(void)
{
    int r;

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}
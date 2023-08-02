#include <stdio.h>
#include "main.h"

int length(char *s){
    int x=0;
    while (s[x]!='\0')
        x++;
    return (x);
}
int check(char *s,int start,int end)
{
    if (start > end)
        return (1);
    if (s[start]!=s[end])
        return (0);
    if (start == end )
        return (1);
    start++;
    end--;
    return (check(s,start,end));
}

int is_palindrome(char *s)
{
    int len = length(s) - 1;
    int mid = len/2;
    int ans = check(s,0,len);
    return (ans);
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
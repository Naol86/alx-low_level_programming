#include "main.h"
#include<stdio.h>

void puts_half(char *str)
{
    int len = 0;
    int mid;
    while (*(str + len) != '\0')
    {
        len++;
    }
    printf("%d\n",len);
    if (len % 2 == 0)
        mid = len / 2;
    else
        mid = (len - 1) / 2;
    while (mid < len)
    {
        putchar(*(str + mid++));
    }
    putchar(10);
}

int main(void)
{
    char *str;

    str = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    puts_half(str);
    return (0);
}
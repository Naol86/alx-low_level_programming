#include "main.h"
#include<stdio.h>

void print_rev(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    putchar(10);
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
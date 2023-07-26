#include <stdio.h>

char *string_toupper(char *str)
{
    int i=0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i]=str[i]-32;
            printf("%d\n", i);
            i++;
        }
        else
        i++;
    }
}

int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;
    printf("%s", str);

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

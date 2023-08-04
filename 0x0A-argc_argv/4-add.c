#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    int temp;
    int ans = 0;
    for (i = 1; i < argc; i++)
    {
        temp = atoi(argv[i]);
        if (temp == 0 && *argv[i] != '0')
        {
            printf("Error\n");
            return (0);
        }
        ans += temp;
    }
    if (argc>1)
        printf("%d\n", ans);
    else
        printf("%d\n",0);
    return (0);
}

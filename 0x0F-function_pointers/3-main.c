#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv)
{
    int x, y;
    int (*function)(int , int);
    int answer;
    char ch;

    x = atoi(argv[1]);
    y = atoi(argv[3]);

    if (argc!=4)
    {
        printf("Error\n");
        exit(98);
    }

    if (argv[2]!='+' || argv[2]!='-' || argv[2]!='*' || argv[2]!='/' || argv[2]!='%')
    {
        printf("Error\n");
        exit(99);
    }

    ch = (argv[2]);
    if ((ch=='/' || ch=='%') && y==0)
    {
        printf("Error");
        exit(100);
    }

    function = get_op_func(argv[2]);

    if (function == NULL)
    {
        return (NULL);
    }

    answer = function(x,y);
    printf("%d\n",answer);

    return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplication
 * @argc: int
 * @argv: argument
 * Return: int 0
 */

int main(int argc, char *argv[])
{
int i;
int temp;
int ans = 1;
for (i = 1; i < argc; i++)
{
temp = atoi(argv[i]);
ans = ans *temp;
}
if (i == 3)
printf("%d\n", ans);
else
printf("Error\n");
return (0);
}

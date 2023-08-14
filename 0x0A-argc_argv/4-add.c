#include <stdio.h>
#include <stdlib.h>

/**
 * main - sum
 * @argc: int
 * @argv: array of argument
 * Return: int
 */

int main(int argc, char *argv[])
{
int i;
int j;
int temp;
int ans = 0;
for (i = 1; i < argc; i++)
{
temp = atoi(argv[i]);
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (0);
}
}
ans += temp;
}
printf("%d\n", ans);
return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int num;
int mod;
int arr[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (0);
}
num = atoi(argv[1]);
for (i = 0; i < 5; i++)
{
sum += num / arr[i];
mod = num % arr[i];
num = mod;
}
printf("%d\n", sum);
return (0);
}

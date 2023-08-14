#include <stdio.h>

/**
 * main - print all argument
 * @argc: int
 * @argv: input arguments
 * Return: int 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

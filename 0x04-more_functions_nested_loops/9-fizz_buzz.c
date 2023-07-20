#include "main.h"
#include <stdio.h>
/**
 * main - printing fizz buzz
 * Return: 0
 */
int  main(void)
{
int i;
for (i = 1; i < 101; i++)
{
if (i % 3 == 0)
printf("%s", "Fizz");
if (i % 5 == 0)
printf("%s", "Buzz");
if (i % 3 != 0 && i % 5 != 0)
printf("%d", i);
if (i != 100)
printf("%s", " ");
}
putchar(10);
return (0);
}

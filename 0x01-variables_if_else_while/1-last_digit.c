#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
 * main - random number that 5<x > 5
 * Return: 0
 */
int main(void)
{
int n;
int ans;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ", n);
/* your code goes there */
ans = n % 10;
if (ans > 5)
printf("%d and is greater than 5\n", ans);
else if (ans == 0)
printf("%d and is 0\n", ans);
else
printf("%d and is less than 6 and not 0\n", ans);
return (0);
}

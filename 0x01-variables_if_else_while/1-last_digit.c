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

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int ans;
ans = abs(n % 10);
if (ans > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, ans);
else if (ans == 0)
printf("Last digit of %d is %d and is 0\n", n, ans);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ans);
return (0);
}

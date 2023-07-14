#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random
 *
 * return: 0
 */
int main(void)
{
int n, ans;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
ans = n % 10;
if (ans > 5)
printf("Last digit of %zu is %lu and is greater than 5\n", n, ans);
else if (ans == 0)
printf("Last digit of %zu is %lu and is 0\n", n, ans);
else
printf("Last digit of %zu is %lu and is less than 6 and not 0\n", n, ans);
return (0);
}

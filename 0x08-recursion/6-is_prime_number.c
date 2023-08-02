#include "main.h"
int test_prime(int num, int index, int start);

/**
 * is_prime_number - finding prime number
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
int temp = n;
int sqrt;
int ans;
if (n < 2)
{
return (0);
}
sqrt = temp / 2;
if (sqrt != -1)
{
ans = test_prime(n, sqrt, 2);
return (ans);
}
else
temp++;
}

/**
 * test_prime - test if number is prime
 * @num: int
 * @index: int
 * @start: int
 * Return: int
 */

int test_prime(int num, int index, int start)
{
if (num % start == 0)
{
return (0);
}
else if (index < start)
{
return (1);
}
start++;
return (test_prime(num, index, start));
}

#include "main.h"
int test_prime(int num, int index, int start);

/**
 * is_prime_number - finding prime number
 * @n: int
 * Return: int
 */

int is_prime_number(int n)
{
int sqrt;
int ans;
if (n < 2)
{
return (0);
}
if (n == 2)
return (1);
sqrt = n / 2;
ans = test_prime(n, sqrt, 2);
return (ans);
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

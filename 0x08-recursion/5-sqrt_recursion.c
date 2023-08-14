#include "main.h"
int test(int y, int z);

/**
 * _sqrt_recursion - finding sqrt of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
int x = 1;
int ans;
if (n < 0)
{
return (-1);
}
ans = test(n, x);
return (ans);
}

/**
 * test - check if number have sqrt
 * @y: int
 * @z: int
 * Return: int
 */
int test(int y, int z)
{
int temp = z * z;
if (y == 1)
return (1);
else if (temp == y)
return (z);
else if (temp > y)
return (-1);
else
{
z++;
return (test(y, z));
}
}

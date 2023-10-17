#include <stdio.h>

/**
 * add - add two numbers
 * @a: int
 * @b: int
 * Return: int
 */

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return (ans);
}
/**
 * sub - difference of a number
 * @a: int a
 * @b: int b
 * Return: int
 */
int sub(int a, int b)
{
	int ans;
	ans = a - b;
	return (ans);
}

/**
 * mul - multiplication of two numbers
 * @a: int a
 * @b: int b
 * Return: int
 */
int mul(int a, int b)
{
	int ans;
	ans = a * b;
	return (ans);
}

/**
 * div - divison of a number
 * @a: int a
 * @b: int b 
 * Return: int
 */
int div(int a, int b)
{
	if (b > 0) {
        return (a / b);
    } else {
        return (0);
    }
}

/**
 * mode - mode of a number
 * @a: int a
 * @b: int b
 * Return: int
 */
int mod(int a, int b)
{
	if (b > 0) {
        return (a % b);
    } else {
        return (a);
    }
}

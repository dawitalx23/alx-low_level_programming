#include "main.h"

/**
 * sqrtRec - return sqrt
 * @a: int
 * @b: int
 *
 * Return: int
 */

int sqrtRec(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}

	if (b * b > a)
	{
		return (-1);
	}

	return (sqrtRec(a, b + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: arg
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (sqrtRec(n, 1));
}

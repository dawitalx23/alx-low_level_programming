#include "main.h"

int isPrime(int a, int b);

/**
 * is_prime_number - checks if a number is prime
 * @n: int arg
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, 2));
}

/**
 * isPrime - checks if a number is prime
 * @a: int arg1
 * @b: int arg2
 *
 * Return: int
 */

int isPrime(int a, int b)
{
	if (a == b)
	{
		return (1);
	}

	if (a % b == 0)
	{
		return (0);
	}
	return (isPrime(a, b + 1));
}

#include "variadic_functions.h"

/**
 * sum_them_all - sum all the args
 * @n: arg
 *
 * Return: int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	for (; i < n; i++)
	{
		sum = sum + va_arg(valist, int);
	}

	va_end(valist);

	return (sum);
}

#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: arg1
 * @n: const
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i = 0;

	va_start(valist, n);

	for (; i < n; i++)
	{
		printf("%d", va_arg(valist, int));

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(valist);
}

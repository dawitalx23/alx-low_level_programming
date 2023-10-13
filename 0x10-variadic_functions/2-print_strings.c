#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings folowed by newline
 * @separator: arg1
 * @n: arg2
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *s;
	unsigned int i = 0;

	va_start(valist, n);

	for (; i < n; i++)
	{
		s = va_arg(valist, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(valist);
}

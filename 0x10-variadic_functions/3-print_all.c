#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: arg
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, j, k = 0;
	char *s;
	const char t_arg[] = "cifs";

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (t_arg[j] != '\0')
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		
		if (format[i] == 'c')
		{
			printf("%c", va_arg(valist, int)), k = 1;
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(valist, int)), k = 1;
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(valist, double)), k = 1;
		}
		else if (format[i] == 's')
		{
			s = va_arg(valist, char *), k = 1;

			if (!s)
			{
				printf("(nil)");
			}
			printf("%s", s);
		}
		i++;
	}
	printf("\n"), va_end(valist);
}

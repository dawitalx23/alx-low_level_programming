#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: argument
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i = 0, j;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			if (i * j < 10 && j != 0)
				printf("  ");
			else if (i * j < 100 && i * j >= 10)
				printf(" ");
			if (j == n)
				printf("%d\n", i * j);
			else
				printf("%d, ", i * j);
			j++;
		}
		i++;
	}
}

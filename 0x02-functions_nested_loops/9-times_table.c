#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i = 0, j, times;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			times = i * j;
			if (times >= 10)
			{
				_putchar('0' + (times / 10));
				_putchar('0' + (times % 10));
			}
			else
			{
				_putchar(' ');
				_putchar('0' + times);
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}

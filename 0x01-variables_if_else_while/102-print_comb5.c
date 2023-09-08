#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, m, n;

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			k = i / 10;
			l = i % 10;
			putchar('0' + k);
			putchar('0' + l);
			putchar(' ');
			m = j / 10;
			n = j % 10;
			putchar('0' + m);
			putchar('0' + n);
			if (i < 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

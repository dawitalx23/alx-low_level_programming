#include <stdio.h>

/**
 * main - computes sum of multiples of 3 or 5
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int i = 0, sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}

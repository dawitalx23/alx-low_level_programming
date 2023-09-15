#include <stdio.h>
#include <math.h>

/**
 * main - prints maximum prime factorial
 *
 * Return: Always 0 Successful
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long max = 2;
	unsigned long i = 3;

	while (num % 2 == 0)
	{
		max = 2;
		num = num / 2;
	}

	for (; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			max = i;
			num = num / i;
		}
	}

	if (num > 2)
		max = num;

	printf("%lu\n", max);

	return (0);
}

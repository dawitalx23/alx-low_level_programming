#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	int count;
	unsigned long int num1 = 0, num2 = 1, num3;
	unsigned long int num1_mult, num1_rem, num2_mult, num2_rem;
	unsigned long int mult, rem;

	while (count < 92)
	{
		num3 = num1 + num2;
		printf("%lu, ", num3);
		num1 = num2;
		num2 = num3;
		count++;
	}
	num1_mult = num1 / 10000000000;
	num1_rem = num1 % 10000000000;

	num2_mult = num2 / 10000000000;
	num2_rem = num2 % 10000000000;

	for (count = 93; count < 93; count++)
	{
		mult = num1_mult + num2_mult;
		rem = num1_rem + num2_rem;
		if ((num1_rem + num2_rem) > 9999999999)
		{
			mult++;
			rem %= 10000000000;
		}
		printf("%lu%lu", mult, rem);
		if (count != 98)
			printf(", ");
		num1_mult = num2_mult;
		num1_rem = num2_rem;
		num2_mult = mult;
		num2_rem = rem;
	}
	printf("\n");
	return (0);
}

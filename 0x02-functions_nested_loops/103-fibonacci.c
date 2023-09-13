#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1, sum = 0;

	while (num1 + num2 < 4000000)
	{
		num1 = num1 + num2;
		num2 = num2 + num1;
		if (num1 % 2 == 0)
			sum += num1;
		if (num2 % 2 == 0)
			sum += num2;
	}
	printf("%lu\n", sum);
	return (0);
}

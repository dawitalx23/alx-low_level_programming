#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned long long num1 = 0, num2 = 1;
	int counter = 0;

	while (counter < 50)
	{
		num1 = num1 + num2;
		num2 = num2 + num1;
		if (counter < 48)
			printf("%llu, %llu, ", num1, num2);
		else
			printf("%llu, %llu\n", num1, num2);
		counter += 2;
	}
	return (0);
}

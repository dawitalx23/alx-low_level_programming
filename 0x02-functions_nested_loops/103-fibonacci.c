#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1;

	while (num1 + num2 < 4000000)
	{
		num1 = num1 + num2;
		num2 = num2 + num1;
		if (num1 % 2 == 0)
			printf("%lu, ", num1);
		if (num2 % 2 == 0)
			printf("%lu, ", num2);
	}
	return (0);
}

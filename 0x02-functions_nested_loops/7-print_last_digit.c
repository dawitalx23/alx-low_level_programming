#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer argument
 *
 * Return: last digit of a number n
 */
int print_last_digit(int n)
{
	int reminder = n % 10;

	if (reminder < 0)
	{
		_putchar('0' + reminder * -1);
		return (reminder * -1);
	}
	else
	{
		_putchar('0' + reminder);
		return (reminder);
	}
}

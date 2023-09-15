#include <stdlib.h>
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: int arg
 *
 * Return: void
 */

void print_number(int n)
{
	int num;

	if (n < 0)
		_putchar('-');

	num = abs(n);

	if (num / 10)
		print_number(num / 10);

	_putchar('0' + (num % 10));
}

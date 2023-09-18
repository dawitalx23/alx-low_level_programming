#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: arg
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0, length = 0;

	while (*(str + (i++)))
		length++;

	if (length % 2 == 0)
		i = length / 2;
	else
		i = (length - 1) / 2;

	for (; i < length; i++)
		_putchar(*(str + i));
	_putchar('\n');
}

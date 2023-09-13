#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *text = "_putchar";

	while (*text)
		_putchar(*text++);
	_putchar('\n');
	return (0);
}

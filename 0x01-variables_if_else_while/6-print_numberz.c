#include <stdio.h>

/**
 * main - prints all single digit numbers of base 0 - 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}

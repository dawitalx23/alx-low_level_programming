#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

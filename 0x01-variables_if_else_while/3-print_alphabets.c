#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 'a';
	int j = 'A';

	for (; i <= 'z'; i++)
		putchar(i);
	for (; j <= 'Z'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

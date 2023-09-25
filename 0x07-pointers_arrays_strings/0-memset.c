#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: arg1
 * @b: arg2
 * @n: arg3
 *
 * Return: chars
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *newChars = s;

	for (; i < n; i++)
	{
		newChars[i] = b;
	}
	return (newChars);
}

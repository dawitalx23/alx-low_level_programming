#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: arg1
 * @src: arg2
 * @n: arg3
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *newChars = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (newChars);
}

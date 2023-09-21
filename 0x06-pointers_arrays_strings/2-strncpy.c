#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destinination String
 * @src: String arg
 * @n: size to be copied
 *
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; *(src + i) != '\0' && i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}

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
	int i = 0, len = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	len = i > n ? n : i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	if (dest[i - 1] == '\n')
	{
		dest[i] = '\0';
	}
	return (dest);
}

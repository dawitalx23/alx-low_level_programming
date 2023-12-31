#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string argument destination
 * @src: string argument to be append
 * @n: byte
 *
 * Return: appended string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len2 = 0, len1 = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	len2 = i;
	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	len1 = n > i ? i : n;

	for (i = 0; i < len1; i++)
	{
		dest[len2 + i] = src[i];
	}
	dest[len2 + i] = '\0';
	return (dest);
}

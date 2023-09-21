#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be modified
 * @src: string argument to be merged/append
 *
 * Return: the final string result
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	len = i;
	i = 0;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	dest[len + i] = '\0';
	return (dest);
}

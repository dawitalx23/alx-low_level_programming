#include "main.h"

/**
 * create_array - creates an array of chars, and initializes..
 * @size: arg1
 * @c: arg2
 *
 * Return: array of chars
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		*(s + i) = c;
	}
	*(s + i) = '\0';
	return (s);
}

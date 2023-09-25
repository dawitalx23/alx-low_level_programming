#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: arg1
 * @accept: arg2
 *
 * Return: string
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	while (*(s + j) != '\0')
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *(s + j))
				return (s + j);
			i++;
		}
		j++;
	}
	return (0);
}

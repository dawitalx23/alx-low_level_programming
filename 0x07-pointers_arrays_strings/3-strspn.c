#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: arg1
 * @accept: arg2
 *
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, i = 0, j, prevCount;

	while (*(s + i) != '\0')
	{
		j = 0;
		prevCount = count;

		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
			j++;
		}
		if (prevCount == count)
			break;
		i++;
	}
	return (count);
}

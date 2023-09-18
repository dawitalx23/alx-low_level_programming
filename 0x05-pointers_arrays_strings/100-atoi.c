#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: arg
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0, j = -1, k = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
		{
			j *= -1;
		}
		if (*(s + i) > 47 && *(s + i) < 58)
		{
			if (k < 0)
				k = (k * 10) - (*(s + i) - '0');
			else
				k = ((*(s + i) - '0') * -1);
			if (*(s + (i + 1)) < 48 || *(s + (i + 1)) > 57)
				break;
		}
	}
	if (j < 0)
		k *= -1;
	return (k);
}

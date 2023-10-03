#include "main.h"

/**
 * _findlen - calculates string length
 * @s: string arg
 *
 * Return: int length
 */

int _findlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - concatenates two strings
 * @s1: arg1
 * @s2: arg2
 *
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int len, i = 0;
	char *constr;

	len = _findlen(s1) + _findlen(s2) + 1;

	constr = (char *) malloc(len * sizeof(char));

	if (constr == NULL)
		return NULL;

	while (*s1)
	{
		constr[i] = *s1;
		s1++;
		i++;
	}

	while (*s2)
	{
		constr[i] = *s2;
		s2++;
		i++;
	}
	return (constr);
}
		
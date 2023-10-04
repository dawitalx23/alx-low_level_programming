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

	while (*s)
	{
		s++;
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
	int len;
	char *constr, *temp;

	len = _findlen(s1) + _findlen(s2) + 1;

	constr = (char *) malloc(len * sizeof(char));

	if (constr == NULL)
		return (NULL);

	temp = constr;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (*s1)
	{
		*temp++ = *s1++;
	}

	while (*s2)
	{
		*temp++ = *s2++;
	}

	*temp = 0;

	return (constr);
}

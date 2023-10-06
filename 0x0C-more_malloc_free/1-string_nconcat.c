#include "main.h"

/**
 * _findlen - calculates string length
 * @s: string arg
 *
 * Return: int length
 */

int _findlen(char *s)
{
	unsigned int i = 0;

	while (*s)
	{
		s++;
		i++;
	}

	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: arg1
 * @s2: arg2
 * @n: arg3
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, lens1, lens2, i;
	char *constr, *temp;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	lens1 = _findlen(s1);
	lens2 = _findlen(s2);

	if (lens2 >= n)
	{
		len = lens1 + n + 1;
	}
	else
	{
		len = lens1 + lens2 + 1;
	}

	constr = (char *) malloc(len * sizeof(char));

	if (constr == NULL)
		return (NULL);

	temp = constr;

	while (*s1)
	{
		*temp++ = *s1++;
	}

	for (i = 0; i < n && i < lens2; i++)
	{
		*temp++ = *(s2 + i);
	}

	*temp = 0;

	return (constr);
}

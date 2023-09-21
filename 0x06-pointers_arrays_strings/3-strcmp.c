#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: arg1
 * @s2: arg2
 *
 * Return: String
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}

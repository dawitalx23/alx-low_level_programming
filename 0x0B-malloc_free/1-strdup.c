#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string arg
 *
 * Return: NULL if out of memory and str is null elase string
 */

char *_strdup(char *str)
{
	int i = 0, len;
	char *dup;

	if (str == NULL)
		return (NULL);

	while (*(str + i) != '\0')
	{
		i++;
	}

	len = i + 1;

	dup = (char *) malloc(len * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

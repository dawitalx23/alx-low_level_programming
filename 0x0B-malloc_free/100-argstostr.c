#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arg1
 * @av: arg2
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k, len = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			len++;
		}
	}
	len += ac;

	result = (char *) malloc(len * sizeof(char) + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			result[j] = av[i][k];
			j++;
		}
		if (result[j] == '\0')
		{
			result[j++] = '\n';
		}
	}
	return (result);
}

#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: arg
 * @max: arg2
 *
 * Return: int array
 */

int *array_range(int min, int max)
{
	int *result;
	int i = 0, j;

	if (min > max)
		return (NULL);

	result = malloc(sizeof(*result) * (max - min + 1));

	if (result == NULL)
		return (NULL);

	for (j = min; j <= max; j++)
	{
		result[i] = j;
		i++;
	}

	return (result);
}

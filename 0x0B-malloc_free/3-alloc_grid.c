#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: arg1
 * @height: arg2
 *
 * Return: int double array
 */

int **alloc_grid(int width, int height)
{
	int **result;
	int i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	result = (int **) malloc(height * sizeof(int *));

	if (result == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		result[i] = (int *) malloc(width * sizeof(int));

		if (result[i] == NULL)
		{
			while (i >= 0)
			{
				free(result[i--]);
			}
			free(result);
			return (NULL);
		}

		for (; j < width; j++)
		{
			result[i][j] = 0;
		}
	}
	return (result);
}

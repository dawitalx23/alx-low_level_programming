#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: arg
 *
 * Return: void *
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b * sizeof(int));

	if (result == NULL)
	{
		exit (98);
	}

	return (result);
}

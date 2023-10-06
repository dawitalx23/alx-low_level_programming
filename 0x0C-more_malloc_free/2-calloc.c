#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: arg1
 * @size: arg2
 *
 * Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);

	if (result == NULL)
		return (NULL);

	for (; i < (nmemb * size); i++)
	{
		result[i] = 0;

	return (result);
}

#include "main.h"

/**
 * _min - resturn minimum of 2 nums
 * @num1: num1
 * @num2: num2
 *
 * Return: int
 */

unsigned int _min(unsigned int num1, unsigned int num2)
{
	if (num1 < num2)
	{
		return (num1);
	}

	return (num2);
}

/**
 * _realloc - reallocates a memory block using malloc and fre
 * @ptr: arg1
 * @old_size: arg2
 * @new_size: qrg3
 *
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		result = malloc(new_size);
		return (result);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	result = malloc(new_size);
	if (result == NULL)
		return (NULL);

	for (; i < _min(old_size, new_size); i++)
	{
		*((char *)result + i) = *((char *) ptr + i);
	}
	free(ptr);
	return (result);
}

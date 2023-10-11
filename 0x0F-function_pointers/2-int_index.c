#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an integer.
 * @array: arg1
 * @size: arg2
 * @cmp: arg3
 *
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}

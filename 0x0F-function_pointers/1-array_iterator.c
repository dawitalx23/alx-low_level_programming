#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: arg1
 * @size: arg2
 * @action: arg3
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL || size <= 0)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}

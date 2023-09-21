#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: arg1
 * @n: arg2
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	n--;

	while (i <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i++] = j;
	}
}

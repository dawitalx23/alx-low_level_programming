#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix of integers
 * @a: arg1
 * @size: arg2
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum = 0, sum1 = 0;

	for (; i < (size * size); i += size + 1)
	{
		sum = sum + a[i];
	}
	printf("%d, ", sum);

	for (i = size - 1; i < size * size - 2; i += size - 1)
	{
		sum1 = sum1 + a[i];
	}
	printf("%d\n", sum1);
}

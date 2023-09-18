#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: arg-1
 * @b: arg-2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

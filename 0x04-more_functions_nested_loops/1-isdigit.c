#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int argument to be checked
 *
 * Return: int 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c <= 9 && c >= 0)
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: argument to be checked
 *
 * Return: int type data
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

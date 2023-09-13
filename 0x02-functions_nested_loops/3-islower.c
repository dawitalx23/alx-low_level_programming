#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * @arg1 - int c
 *
 * Return: int return type
 */
int _islower(int c)
{
	if  (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

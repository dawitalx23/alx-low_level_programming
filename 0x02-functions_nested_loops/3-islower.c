#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Description of parameter c _islower
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

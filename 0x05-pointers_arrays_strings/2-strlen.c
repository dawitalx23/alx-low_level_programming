#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: arg
 *
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0, i;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;
	return (length);
}

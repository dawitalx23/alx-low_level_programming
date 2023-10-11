#include <stdio.h>

/**
 * print_name - prints a name
 * @name: arg1
 * @f: arg2
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

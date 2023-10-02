#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}

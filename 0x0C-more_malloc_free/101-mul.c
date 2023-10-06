#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0 Successs
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

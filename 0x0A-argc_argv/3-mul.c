#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arg1
 * @argv: arg2
 *
 * Return: o success
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

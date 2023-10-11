#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - prints the opcodes of its own main function
 * @a: arg1
 * @:b: arg2
 *
 * Return: void
 */

void  print_opcodes(char *a, int b)
{
	int i = 0;

	for (; i < b; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < b - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - entry
 * @argc: arg1
 * @argv: arg2
 *
 * Return: o success
 */

int main(int argc, char **argv)
{
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	a = atoi(argv[1]);

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, a);
	return (0);
}

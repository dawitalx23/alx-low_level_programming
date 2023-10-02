#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>

/**
 * main - adds positive numbers.
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0 Success;
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *temp;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		temp = argv[i];
		j = 0;

		while (temp[j] != '\0')
		{
			if (!isdigit(temp[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;

		}
		sum = sum + atoi(temp);
	}
	printf("%d\n", sum);
	return (0);
}

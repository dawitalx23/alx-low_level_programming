#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: arg1
 * @argv: arg2
 *
 * Return: 0 succes
 */

int main(int argc, char *argv[])
{
	int money, remainder, chela = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	remainder = money % 25;
	chela += money / 25;
	money = remainder;
	remainder = money % 10;
	chela += money / 10;
	money = remainder;
	remainder = money % 5;
	chela += money / 5;
	money = remainder;
	remainder = money % 2;
	chela += (money / 2 + remainder);
	printf("%d\n", chela);
	return (0);
}

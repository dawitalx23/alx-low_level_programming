#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 Success
 */
int main(void)
{
	unsigned int num1 = 0, num2 = 1, counter = 0;

        printf("%d, %d, ", num1, num2);

        while (counter <= 50){
                num1 = num1 + num2;
                num2 = num2 + num1;
                printf("%d, %d,", num1, num2);
                counter++;
        }
        return (0);
}

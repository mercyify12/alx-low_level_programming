#include "main.h"
#include <stdio.h>

/**
 * main - entry point of the function
 *
 * Desciption: program that prints num 1 - 100
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiple of 3 and 5
 *
 * Return: mostly 0
 */
int main(void)
{
	int e;

	for (e = 1; e <= 100; e++)
	{
		if (e % 15 == 0)
			printf("FizzBuzz");
		else if (e % 3 == 0)
			printf("Fizz");
		else if (e % 5 == 0)
			printf("Buzz");
		else
			printf("%d", e);
		if (e < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

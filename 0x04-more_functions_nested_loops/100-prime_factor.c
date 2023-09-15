#include "main.h"
#include <stdio.h>

/**
 * main - function printing the largest prime factor of 612852475143
 * Return: mostly 0
 */
int main(void)
{
	unsigned long int a, n = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((n % a == 0) && (n != a))
			n = n / a;
	}
	printf("%lu\n", n);
	return (0);
}

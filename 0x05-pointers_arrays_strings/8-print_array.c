#include "main.h"


/**
 * print_array - entry point for printing element of an array of integer
 * @a: integer of array
 * @n: the number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}

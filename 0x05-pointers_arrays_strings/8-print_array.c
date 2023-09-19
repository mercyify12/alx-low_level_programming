#include "main.h"
#include <stdio.h>

/**
 * print_array - entry point for printing element of an array of integer
 * @a: integer of array
 * @n: the number of elements of the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	if (j != (n - 1))
	{
	printf(",");
	}
	}
	printf(",");
	}
	}
	print('\n');
}

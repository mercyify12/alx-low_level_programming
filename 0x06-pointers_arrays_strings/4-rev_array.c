#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integer
 * @a: first function parameter
 * @n: second number of function parameter
 * Return: mostly 0
 */

void reverse_array(int *a, int n)
{
	int y;
	int x;

	for (y = 0; y < n--; y++)
	{
		x = a[y];
		a[y] = a[n];
		a[n] = x;
	}
}

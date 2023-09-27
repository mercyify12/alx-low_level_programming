#include "main.h"
/**
 * print_diagsums - main function that prints the sum of the two diagonals
 * @size: first function parameter
 * @a: second function parameter
 * Return: moatly 0
 */

void print_diagsums(int *a, int size)
{
	int count1;
	int count2;
	int k;

	count1 = 0;
	count2 = 0;

	for (k = 0; k < size; k++)
	{
		count1 = count1 + a[k * size + k];
	}
	for (k = size - 1; k >= 0; k--)
	{
		count2 += a[k * size + (size - k - 1)];
	}
	printf("%d, %d\n", count1, count2);
}

#include <stdio.h>

/**
 * swap_int - function for swaping the values of two integer
 * @a: first integer for swaping
 * @b: second integer for swaping
 * Return: mostly 0
 */

void swap_int(int *a, int *b)
/* entry point of the function for swapping. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

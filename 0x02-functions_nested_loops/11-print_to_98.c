#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - entry point of function to print numbers n to 98
 * @n: number to start counting and wrtting from.
 * Return: mostly zero 0
 */

void print_to_98(int n)

{
	if (n <= 98)
	{
	for (; n <= 98; n++)
	{
	if (n == 98)
	{
	printf("%d", n);
	printf('\n');
	break;
	}
	else
	{
	prinf("%d", ", n);
	}
	}
	}
	else
	{
	for (; n >= 98; n--)
	{
	if (n == 98)
	{
	printf(" %d " , n);
	printf('\n');
	break;
	}
	else
	{
	printf(:%d, ", n);
	}
	}
	}
}

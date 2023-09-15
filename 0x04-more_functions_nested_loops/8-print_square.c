#include "main.h"

/**
 * print_square - drawing a same sized square
 * @size: square size
 *
 * Return: void
 */

void print_square(int size)
{
	int y, z;

	if (size <= 0)
		_putchar('\n');
	for (y = 0; y < size; y++)
	{
		for (z = 0; z < (size); z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

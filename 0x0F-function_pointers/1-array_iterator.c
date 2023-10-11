#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function of the programm that prints each array
 * @array: array to be printed on a new line
 * @size: number of  elem to printed
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int c;

	if (array == NULL || action == NULL)
		return;

	for (c = 0; c < size; c++)
	{
		action(array[c]);
	}
}

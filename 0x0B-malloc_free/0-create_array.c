#include "main.h"
#include <stdlib.h>

/**
 * create_array - program function that create array of size and assign char c
 * @size: size of array to be created
 * @c: char to assign the created array
 * Description: creating the array of size size and assign char c
 * Return: a pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int y;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (y = 0; y < size; y++)
		str[y] = c;
	return (str);
}

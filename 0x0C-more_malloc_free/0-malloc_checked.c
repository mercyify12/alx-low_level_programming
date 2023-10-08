#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function of the program that allocates memory using malloc
 * @b: number of bytes of memory to be allocated
 * Return: return a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

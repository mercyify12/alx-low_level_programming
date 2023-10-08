#include <stdlib.h>
#include "main.h"

/**
 * *_memset - function that allocates memory with a constant byte
 * @s: memory space to be allocated
 * @b: character to copy
 *
 * @n: number of times to copy b
 * Return: pointer to the memory space s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

/**
 * *_calloc - function of the program that allocates memory for an array
 * @nmemb: array number of element
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

#include "main.h"

/**
 * _memcpy - entry point of main function that copies memory area
 * @src: source of the parameter to be copied
 * @dest: destination of copied memory area
 * @n: function parameter to be copied
 * Return: to copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return(dest);
}

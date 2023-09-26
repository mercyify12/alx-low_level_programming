#include "main.h"

/**
 * _memset - program function that fills memory with a constant byte
 * @b: The value for filling memory
 * @n: number one parameter to fill
 * @s: number two parameter to fill
 * Return: to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		s[y] = b;
	return (s);
}

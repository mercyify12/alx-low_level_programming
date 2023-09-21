#include "main.h"

/**
 * _strncat - the main function for concatenation of two string
 * @n: first function concatenation parameter
 * @src: second function concatenation parameter
 * @dest: third function concatenation parameter
 * Return: return back to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y, x;

	y = 0;
	x = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	while (x < n && src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - main function for concatenates of two strings
 * @src: first concatenation parameter
 * @dest: second concatenation parameter
 * Return: returns pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int y, x;

	y = 0;
	x = 0;

	while (dest[y] != '\0')
	{
		y++;
	}
	while (src[x] != '\0')
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}

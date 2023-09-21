#include "main.h"

/**
 * _strncpy - Entry point of  main funtion that copies a string
 * @src: first function parameter to be copied
 * @dest: second function parameter to be copied
 * @n: third function parameter to be copied
 * Return: return to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	y = 0;

	while (y < n && src[y] != '\0')
	{
		dest[y] = src[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}

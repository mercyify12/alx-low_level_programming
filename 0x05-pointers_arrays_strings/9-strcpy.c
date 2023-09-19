#include "main.h"

/**
 * _strcpy - function that copy a string
 * @dest: destination vaalue of copied string
 * @src: source value of string to be copied
 * Return: the pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
	dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>
/**
 * _strlen - entry of function that returns the lenght of a string
 * @str: string to find the value of its lenght
 * Return: return to lenght of string
 */

size_t _strlen(const char *str)
/** the function that returns string lenght */
{
	size_t lenght = 0;

	while (*str++)
	lenght++;
	return (lenght);
}

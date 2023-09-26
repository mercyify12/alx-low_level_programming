#include "main.h"

/**
 * _strchr - entry point of main function that locates a character in a sting
 * @s: first parameter of the function
 * @c: second parameter of the function
 * Return: mostly 0
 */
char *_strchr(char *s, char c)
{
	int o;

	for (o = 0; s[o] >= '\0'; o++)
	{
		if (s[o] == c)
			return (s + o);
	}
	return (0);
}

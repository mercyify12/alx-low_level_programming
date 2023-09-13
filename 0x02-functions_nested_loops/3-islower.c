#include "main.h"

/**
 * _islower - entry point for checking the lower case character
 * @c: this is main character to be checked
 * Return: 0 for any other thing and 1 for lowercase character
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}

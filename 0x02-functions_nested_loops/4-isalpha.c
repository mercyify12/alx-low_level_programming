#include "main.h"

/**
 * _isalpha - the entry point to check for alphabetical character
 * @c: this the character to be checked
 * Return: 0 for anything and 1 for aphabetical character
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}

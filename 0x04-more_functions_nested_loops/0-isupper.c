#include "main.h"

/**
 * _isupper - Entry point checking for lowercase character
 * @c: the character to be checked
 * Return: 1 for uppercase character or 0 for otherwise
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

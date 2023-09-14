#include "main.h"

/**
 * _isdigit - to check for a digit
 * @c: Parameter to be checked
 * Return: 1 for digit character or 0 for otherwise
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

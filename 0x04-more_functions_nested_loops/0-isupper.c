#include "main.h"

/**
 * _isupper - Entry point checking for lowercase character
 * @C: Described character to be checked
 * Return: 0 for anything or 1 for uppercase character
 */

int _isupper(int c)

{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}

#include "main.h"

/**
 * _abs - entry point that computes the absolute value of an interger
 * @c: this the number to be computed
 * Return: mostly 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}

#include "main.h"

/**
 * print_number - function that print an integer
 * @n: integer parameter
 *
 * Return: mostly 0
 */
void print_number(int n)
{
	unsigned int o = n;

	if (n < 0)
	{
		_putchar(45);
		o = -o;
	}
	if (o / 10)
	{
		print_number(o / 10);
	}
	_putchar(o % 10 + '0');
}

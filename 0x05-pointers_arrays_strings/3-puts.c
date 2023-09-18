#include "main.h"
/**
 * _puts - printing a string followed by a new line
 * @str: the particular string to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

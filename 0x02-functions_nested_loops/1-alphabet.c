#include "main.h"

/**
 * print_alphabet - the entry point of the program to print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	_putchar(ch);
	_putchar('\n');
}

#include "main.h"
/**
 * print_chessboard - entry point of the function tha prints a chessboard
 * @a: parameter of the function declared
 * Return: mostly 0
 */

void print_chessboard(char (*a)[8])
{
	int g;
	int h;

	for (g = 0; g < 8; g++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[g][h]);
		_putchar('\n');
	}
}

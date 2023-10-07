#include <stdio.h>
#include "main.h"

/**
 * main - function of the program that prints all arguments it receives
 * @argc: number of arguments to be printed
 * @argv: array of arguments
 *
 * Return: mostly 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);

	}
	return (0);
}

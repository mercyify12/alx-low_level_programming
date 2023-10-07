#include <stdio.h>
#include "main.h"

/**
 * main - entry point of function that prints the name of the program
 * @argc: number of arguments to be printed
 * @argv: array of arguments to be printed
 *
 * Return: mostly zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

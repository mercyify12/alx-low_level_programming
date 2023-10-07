#include <stdio.h>
#include "main.h"

/**
 * main - entry of function to print the number of arguments passed to program
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);

	return (0);
}

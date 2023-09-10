#include <stdio.h>
/**
 * main - this is the main function serving as the entry point for execution
 * Description - how to print all single digit numbers using putchar
 * Return: mostly 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}



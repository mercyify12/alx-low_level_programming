#include <stdio.h>

/**
 * main - this is the main function serving as the entry point for execution
 * Description - how to print alphabets using putchar
 * Return: mostly 0
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

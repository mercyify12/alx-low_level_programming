#include <stdio.h>
/**
 * main - the main function serving as the entry point for execution
 * Description - to print all possiblr combinatio of single digit NO
 * Return: mostly 0
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


#include <stdio.h>
/**
 * main - the main function serving as the entry point for program execution
 * Descrition - printing different combinations or 2 digit
 * Return: always 0
 */
int main(void)
{
	int d, p;

	for (d = '0'; d < '9'; d++)
	{
	for (p = d + 1; p <= '9'; p++)
	{
	if (p != d)
	{
	putchar(d);
	putchar(p);
	if (d == '8' && p == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}

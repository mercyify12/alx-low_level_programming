#include <stdio.h>
/**
 * main - the main function serving as the entry point for execution
 * Description - print all numbers of base 16 in lowecase
 * Return: mostly 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}

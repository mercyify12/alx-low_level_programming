#include <stdio.h>
/**
 * main - this is the main function serving as the entry point for execution
 * Description - how to print alphabets only in lowercase
 * Return: mostly 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}

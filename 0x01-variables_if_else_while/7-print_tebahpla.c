#include <stdio.h>
/**
 * main - the main function serving as the entry point for execution
 * Description - printing lower case alphabet in reverse followed by new line
 * Return:mostly 0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a' ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * leet - the main function of the program
 * @n: number of function parameter
 * Return: to the value of n
 */

char *leet(char *n)
{
	int k;
	int r;

	char s1[] = "aAeEoOtTiL";
	char s2[] = "4433007711";

	for (k = 0; n[k] != '\0'; k++)
	{
		for (r = 0; r < 10; r++)
		{
			if (n[k] == s1[r])
			{
				n[k] = s2[r];
			}
		}
	}
	return (n);
}

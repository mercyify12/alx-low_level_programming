#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this function serves as the enrty point for program execution
 * Descrition: this task is to check last digits
 * Return: mostly end with 0
 */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m < 6 && m != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	else
	{
		printf("last digit of %d is %d and is 0\n", n, m);
	}
	return (0);
}

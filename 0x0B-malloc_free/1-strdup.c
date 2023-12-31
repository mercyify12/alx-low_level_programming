#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - main function that duplicates new memory space location
 * @str: duplicating char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int b, c = 0;

	if (str == NULL)
		return (NULL);
	b = 0;

	while (str[b] != '\0')
		b++;

	aaa = malloc(sizeof(char) * (b + 1));

	if (aaa == NULL)
	return (NULL);

	for (c = 0; str[c]; c++)
		aaa[c] = str[c];

	return (aaa);
}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string given as a parameter.
 * Return: 0
 */

char *_strdup(char *str)
{
	char *c;
	int i, l;

	if (str == NULL)

		return (NULL);

	for (l = 0; str[l] != '\0'; l++)
	{
	}

	c = malloc(sizeof(char) * (l + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i] != 0; i++)
	{
		c[i] = str[i];
	}

	c[i] = '\0';

	return (c);
}

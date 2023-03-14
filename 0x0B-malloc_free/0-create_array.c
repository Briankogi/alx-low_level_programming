#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, initialise it with a specific char
 * @size: This is the size to be allocated
 * @c:  This is the char thats being assigned
 * Return: the string
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	str[i] = '\0';

	return (str);

}

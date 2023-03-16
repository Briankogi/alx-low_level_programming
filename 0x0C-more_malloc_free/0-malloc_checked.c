#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: integer
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	b = malloc(sizeof(int));

	if (b == NULL)
		return (98);
	return (b);
}

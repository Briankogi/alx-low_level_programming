#include "main.h"

/**
 * *malloc_checked -  allocates memory using malloc
 * @b: integer
 * Return: 98
 */

void *malloc_checked(unsigned int b)
{
	void *new = malloc(b);

	if (new == NULL)
		return (98);
	return (new);
}

#include "main.h"
#include <stdlib>
/**
 * *_calloc - allocates memory for an array, using malloc.
 * @nmemb: elements of the array
 * @size: This is the size of integer
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}

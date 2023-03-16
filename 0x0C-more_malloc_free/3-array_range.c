#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers.
 * @min: starting point
 * @max: stoping point, before
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	i = min;
	j = 0;
	for (; i < max; i++)
	{
		arr[j] = i;
		j++;
	}

	return (arr);
}

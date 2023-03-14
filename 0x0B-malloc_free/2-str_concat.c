#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: input1 to concatinate
 * @s2: input2 two to concatinate
 * Return: concatination
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	int i, z;

	i = 0;
	z = 0;
	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (z = 0; s2[z] != '\0'; z++)
	{
	}
	final = malloc(sizeof(char) * (i + z + 1));
	if (final == NULL)
		return (NULL);
	i = 0;
	z = 0;
	for (; s1[i] != '\0'; i++)
	{
		final[i] = s1[i];
	}
	for (; s2[z] != '\0'; z++)
	{
		final[i] = s2[z];
		i++;
	}
	final[i] = '\0';
	return (final);
}

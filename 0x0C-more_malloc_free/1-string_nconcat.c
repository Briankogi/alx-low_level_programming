#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - return s1+(n of s2)
 * @s1: first string
 * @s2:second string
 * @n: the number of s2 to be printed
 * Return: the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	int i, l, j;

	i = 0;
	l = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		S2 = "";
	}
	for (; s1[i] != '\0'; i++;)
	{
	}
	for (; s2[l] <= n; l++)
	{
	}
	new = malloc(sizeof(char) * (i + l + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	j = 0;
	for (; s1[i] != '\0'; i++)
	{
		new[j] = si[i];
		j++;
	}
	i = 0;
	for (; s[i] <= n; j++)
	{
		new[j] = s2[i];
		j++;
	}
	new[j] = '\0';
	return (new);

}

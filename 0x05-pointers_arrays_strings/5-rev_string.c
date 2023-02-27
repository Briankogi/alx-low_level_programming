#include "main.h"
/**
 * rev_string - This is a program reverses a string.
 * @s: This is the string needed
 * Return: void
 */
void rev_string(char *s)
{
	int b, i;
	int k = 0;
	char j[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	b = i;
	i--;

	for (; i >= 0; i--)
	{
		j[k] = s[i];
		k++;
	}

	j[k] = '\0';
	for (k = 0; k <= b; k++)
	{
		s[i] = j[k];
		i++;
	}

}

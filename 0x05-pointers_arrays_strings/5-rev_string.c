#include "main.h"
/**
 * rev_string - This is a program reverses a string.
 * @s: This is the string needed
 * Return: void
 */
void rev_string(char *s)
{
	int a, x, length;
	char k[x];

	x = 0;
	length = 0;
	a = 0;

	for (; s[length] != '\0'; ++length)
	{
		x++;
	}

	x++;

	length--;

	for (; length >= 0; --length)
	{
		k[a] = s[length];
		a++;
	}

	k[a] = '\0';
	length = 0;

	for (; k[length] != '\0'; ++length)
	{

		s[length] = k[length];
	}

	s[length] = '\0';

}

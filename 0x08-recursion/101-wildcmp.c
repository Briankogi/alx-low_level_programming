#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: This is the first string
 * @s2: This is the second string
 * Return: 1 if theyre the same 0 otherewise
 */

int wildcmp(char *s1, char *s2)
{
	if(*s1 == '\0' || *s2 == '\0')
	{
		if (s1 == s2)
		{
			wildcmp(s1 + 1, s2 + 1);
			return (1);
		}

	}
	return (0);
}

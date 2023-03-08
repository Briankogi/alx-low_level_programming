#include "main.h"

/**
 * _puts_recursion - program to print a string
 * @s: This is the string to be printed
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] == '\0')
	{
	}
	else
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(s);
	}

	_putchar('\n');
}

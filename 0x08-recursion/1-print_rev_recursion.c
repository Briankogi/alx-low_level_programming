#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion: Prints a string in reverse
 * @s: This is the string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int length;

	length = strlen(s);

	if (s[length] < 0)
	{
	}
	else
	{
		_putchar(s[length]);
		length--;
		_print_rev_recursion();
	}

	_putchar('\n');
}

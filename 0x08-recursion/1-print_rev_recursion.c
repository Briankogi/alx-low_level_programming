#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: This is the string to be reversed
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

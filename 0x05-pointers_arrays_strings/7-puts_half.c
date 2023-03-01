#include "main.h"
/**
 * puts_half - This programprints half of a string, followed by a new line.
 * @str: This is the string
 * Return: void
 */
void puts_half(char *str)
{
	int i, x, length;

	length = 0;

	for (; str[i] != '\0'; --i)
	{
		length++;
	}

	x = length % 2;

	if (x != 0)
	{
		x--;
	}

	x /= 2;

	for (i = 0; i <= x; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

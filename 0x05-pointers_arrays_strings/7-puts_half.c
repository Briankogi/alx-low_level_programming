#include "main.h"
/**
 * puts_half - This programprints half of a string, followed by a new line.
 * @str: This is the string
 * Return: void
 */
void puts_half(char *str)
{
	int i, x, y, length;

	length = 0;
	i = 0;

	for (; str[i] != '\0'; ++i)
	{
		length++;
	}
	y = length;

	x = length % 2;

	if (x == 0)
	{
		length--;
	}

	length /= 2;
	i = length + 1;

	for (; i <= y; ++i)
	{
		_putchar(str[i]);
	}
	_putchar(str[i] = '\0')
	_putchar('\0');
}

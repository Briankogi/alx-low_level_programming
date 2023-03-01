#include "main.h"
/**
 * puts_half - This programprints half of a string, followed by a new line.
 * @str: This is the string
 * Return: void
 */
void puts_half(char *str)
{
	int i, x, z, y;

	i = 0;
	for (; str[i] != '\0'; +++i)
	{
	}
	
	x = i % 2;
	if (x == 0)
	{
		i--;
	}

	z = i / 2;

	for (;str[z] != '\n' ; ++z)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

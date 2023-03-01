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
	}
	x = i;
	x %= x;

	if (x != 0)
	{
		i--;
	}
	
	i = y;
	y /=y;
	i = y + 1;

	for (;str[i] != '\n' ; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

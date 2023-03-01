#include "main.h"
/**
 * puts2 - Prints everyother character, starting with 1st char, new line
 * @str: This is the string needed
 * Return: void
 */
void puts2(char *str)
{
	int x, length, y;

	length = 0;

	for (x = 0; str[x] != '\0'; ++x)
	{
		length++;
		y = length % 2;
		if (length != 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

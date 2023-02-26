#include "main.h"
/**
 * print_line - This program prints a line ending with \n
 * @n: This is the number of times _ should be printed
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		for (; n > 0; --n)
		{
			_putchar('_');
		}
		_putchar('\\');
		_putchar('n');
	}
	_putchar('\n')
}

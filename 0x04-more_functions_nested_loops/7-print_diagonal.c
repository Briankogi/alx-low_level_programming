#include "main.h"
/**
 * print_diagonal - Prints a long backslash where n is the height
 * @n: This is the height
 * Return: void
 */
void print_diagonal(int n)
{
	int j, i;

	if (n <= 0)
	{
		_putchar('\\');
		_putchar('n');
	}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n; ++j)
			{
				putchar(' ');
			}

		_putchar('\\');
		_putchar('n');
		}

	}
}

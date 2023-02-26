#include "main.h"
/**
 * print_most_numbers - This program prints 1 to 9 without 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number < 10; ++number)
	{
		if (number != 2 && number != 4)
		{
			_putchar(number + '0');
		}

		_putchar('\n');
	}
}

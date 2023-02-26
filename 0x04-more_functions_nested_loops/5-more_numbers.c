#include "main.h"
/**
 * more_numbers - This program prints 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int times;
	int number;

	for (times = 1; times < 11; ++times)
	{
		for (number = 0; number <= 14; ++number)
		{
			if (number  <= 9)
			{
				_putchar(number + '0');
			}
			else
			{
				_putchar(number - 10 + ':';
			}
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ldigit;

	if (n < 0)
	{
		n = -n;
	}

	ldigit = n % 10;

	_putchar(ldigit + '0');

	return (ldigit);
}

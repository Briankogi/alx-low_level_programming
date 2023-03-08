#include "main.h"
/**
 * factorial(int n) - returns factorial of a number
 * @n: start number
 * Return: -1 if n < 0 
 */
int factorial(int n)
{
	int number, fin;

	fin = 0;
	number = 1;

	if (n < 0)
		return (-1);
	else
	{
		if (number <= n)
		{
			fin += number;
			number++;
			factorial(n);
		}
	}
}

#include "main.h"
/**
 * factorial(int n) - 
 * @n: start number
 * Return: int
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

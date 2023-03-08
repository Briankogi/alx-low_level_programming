#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be multiplied
 * @y: number of times to be multiplied by
 * Return: returns the x power y
 */
int _pow_recursion(int x, int y)
{
	int z;
	
	z = 1;

	if (y < 0)
		return (-1);
	else
	{
		if (z <= y)
		{
			x *= x;
			z++;
			_pow_recursion(x, y);
		}
	}
}

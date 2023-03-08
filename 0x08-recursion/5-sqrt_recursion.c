#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number were dealing with
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int turns;

	if (n < 0)
		return (-1);
	else
	{
		turns = sqrt(n);
		return (turns);
	}
}

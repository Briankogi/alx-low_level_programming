#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number were dealing with
 * Return: -1 if n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	int a;

	if (n < 0)
		return (-1);
	if (n == 1 || n == 0 )
		return (n);
	if(n > 1)
	{
		
		a = 0;
		a *= a;
		
		if (n > a)
		       return (0);	
		if (n == a)
			return (n);
		else
			a++;
			_sqrt_recursion;
	}
}

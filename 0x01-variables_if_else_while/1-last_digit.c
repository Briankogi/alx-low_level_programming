#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this is where the program happens
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
	{
		printf("Last digit of %d is %d\n and is greater than 5\n");
	}
	else if (x == 0)
	{
		printf("Last digit of %d is %d and is 0\n");
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful, 98 if wrong number of arguments,
 * 99 if operator is invalid, or 100 if divide by zero
 */

int main(int argc, char *argv[])
	#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
* main -  use atoi to convert arguments to int
* @argc: argc
* @argv: argv
*
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

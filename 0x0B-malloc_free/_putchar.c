#include "main.h"
#include <unistd.h>
/**
 * _putchar - Takes an input and displays it
 * @c: This is the input
 * Return: integer
 */

int _putchar(char c)
{
	return  (write(1, &c, 1));
}

#include <stdio.h>
/**
 * main - This is the entry point of this program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (int i = 1; i < 10; i++)
	{
		putchar(', ');
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
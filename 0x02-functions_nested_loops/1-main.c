#include "main.h"

/**
 * print_alphabet - printing alphabets
 *
 * Return: void.
 */
void print_alphabet(void)
{
	int char = ch;

	for (ch >= 'a'; ch <= 'z'; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}

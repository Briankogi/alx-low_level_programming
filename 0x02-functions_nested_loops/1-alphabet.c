include "main"
/**
 * This program prints a-z
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++1)
	{
		_putchar(letter);
	}

	_putchar('\n')
}

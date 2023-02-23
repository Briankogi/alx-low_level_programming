#include <stdio.h>
/**
 * main - This is the entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			for (int k = j + 1; k < 10; k++)
			{
				if ((i * 100 + j * 10 + k) == (100 * (i != 0) + 10 * (j != 0) + k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
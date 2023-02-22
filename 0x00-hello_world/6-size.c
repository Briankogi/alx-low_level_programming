#include <stdio.h>
/**
 * main -This is a program that prints the types of various types on computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: " % c" byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: " % d" byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: " % ld" byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: " % lld" byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: " % f" byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}

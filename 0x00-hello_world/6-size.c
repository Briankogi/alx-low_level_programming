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

	printf("Size of a char: " % u" byte(s)\n", sizeof(a));
	printf("Size of an int: " % u" byte(s)\n", sizeof(b));
	printf("Size of a long int: " % u" byte(s)\n", sizeof(c));
	printf("Size of a long long int: " % u" byte(s)\n", sizeof(d));
	printf("Size of a float: " % u" byte(s)\n", sizeof(e));
	return (0);
}

#include "main.h"
/**
 * _isalpha - checks alphabetic characters
 * @c the character to be checked
 * Return: 1 if c is a letter
 */
it _isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
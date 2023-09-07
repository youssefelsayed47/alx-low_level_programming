#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character.
 * @c: any string
 * Return: 1 if c is a letter,0 otherwise
*/

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}

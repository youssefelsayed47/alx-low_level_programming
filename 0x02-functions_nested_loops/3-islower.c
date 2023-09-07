#include "main.h"
#include <stdio.h>

/**
 * _islower - a function that checks for lowercase character.
 * @c: any string
 * Return: 1 if c is lowercase,0 otherwise
*/

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - it is a function that returns the length of a string.
 * @s : pointes to chars in the string
 *
 * Return: string length.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}

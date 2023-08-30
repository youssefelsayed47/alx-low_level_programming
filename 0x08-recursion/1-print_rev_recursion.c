#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - this is function that prints a string in reverse.
 *
 * @s : pointes to the chars in the string.
 *
 * return nothing.
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

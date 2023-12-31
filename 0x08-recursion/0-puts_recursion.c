#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - this is a function that prints a string,
 *		followed by a new line
 *
 * @s : pointes to  chars at the string
 *
 * ereturn : nothing.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}

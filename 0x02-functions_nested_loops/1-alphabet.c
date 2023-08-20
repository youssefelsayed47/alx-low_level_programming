#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - it is a function that prints the alphabet,
 *		in lowercase, followed by a new line.
 *
 * return: nothing
*/
void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

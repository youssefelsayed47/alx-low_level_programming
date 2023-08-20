#include "main.h"

/**
 * print_alphabet_x10 - it is a function that prints 10 times
 *		the alphabet, in lowercase, followed by a new line.
 *
 * return : nothing
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int ch = 'a';

	while (i <= 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

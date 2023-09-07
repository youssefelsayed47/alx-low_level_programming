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
	char ch;

	while (i <= 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

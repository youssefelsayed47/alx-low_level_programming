#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int count = 0;
	int i = 0;

	while (s[count] != '\0')
		count++;

	while (i < count)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

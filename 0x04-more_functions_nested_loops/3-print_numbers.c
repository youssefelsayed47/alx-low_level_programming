#include "main.h"

/**
 * print_numbers - Print 0 - 9
 *		only using putcar twice
 *
 * Return: return always 0 (success)
*/
int print_numbers(void)
{
	int nux = 0;

	do {
		_putchar(num + 48);
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}
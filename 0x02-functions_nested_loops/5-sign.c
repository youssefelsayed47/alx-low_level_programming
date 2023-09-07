#include "main.h"
#include <stdio.h>

/**
 * print_sign - a function that prints the sign of a number.
 * @n: number
 * Return: 1 is positive,0 is zero,-1 is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: any number
 * Return: last_digit
*/

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = n * (-1);

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

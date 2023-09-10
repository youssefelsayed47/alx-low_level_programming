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

	last_digit = n % 10;
	printf("%d", last_digit);
	return (last_digit);
}

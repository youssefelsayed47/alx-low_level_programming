#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: numder of args
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	va_start(ptr, n);
	if (n != 0)
	{
		while (i < n)
		{
			sum = sum + va_arg(ptr, int);
			i++;
		}
	}
	va_end(ptr);

	return (sum);
}

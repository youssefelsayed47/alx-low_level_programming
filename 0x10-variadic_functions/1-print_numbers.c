#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: nothing.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		if (separator == NULL && i != (n - 1))
			printf("%d", va_arg(ptr, int));
		else if (i == (n - 1))
			printf("%d\n", va_arg(ptr, int));
		else
			printf("%d%s", va_arg(ptr, int), separator);
		i++;
	}
	va_end(ptr);
}

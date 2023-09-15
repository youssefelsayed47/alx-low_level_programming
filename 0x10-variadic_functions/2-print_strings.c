#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ptr;

	va_start(ptr, n);
	while (i < n)
	{
		char *str = va_arg(ptr, char *);

		if (str == NULL)
			str = "nil";

		if (separator == NULL && i != (n - 1))
			printf("%s", str);
		else if (i == (n - 1))
			printf("%s\n", str);
		else
			printf("%s%s", str, separator);

		i++;
	}
	va_end(ptr);
}

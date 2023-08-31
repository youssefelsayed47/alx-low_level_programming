#include "main.h"
#include <stdio.h>

/**
 * factorial - it isa function that returns the factorial of a given number.
 * @n : the number to calculate the factorial.
 *
 * Return: -1 (n is negative) and 1 (n = 0 or = 1) and (factorial) otherwise
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}

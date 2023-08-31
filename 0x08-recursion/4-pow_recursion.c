#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion -  it is a function that returns the value of x
 *		raised to the power of y.
 * @x : the base
 * @y : the power
 *
 * Return: -1 (y is negative) and 1 (y = zero) and the result.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

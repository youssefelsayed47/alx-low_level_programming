#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: number
 * Return: abs of n
*/

int _abs(int n)
{
	if (n < 0)
		n = n / -1;
	return (n);
}

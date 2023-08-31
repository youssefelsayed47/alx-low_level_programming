#include "main.h"
#include <stdio.h>

int sqrt_2(int num, int count);

/**
 * _sqrt_recursion - a function that returns the natural
 *		square root of a number.
 * @n: the number to calc the square
 * Return: the square of the number
*/

int _sqrt_recursion(int n)
{
	return (sqrt_2(n, 0));
}

/**
 * sqrt_2 - helper function
 *
 * @num: number to calc the square
 * @count: number to count over to find square
 * Return: the root of the number
*/

int sqrt_2(int num, int count)
{
	int square = count * count;

	if (square == num)
		return (count);
	else if (square < num)
		sqrt_2(num, count + 1);
	else
		return (-1);
}

#include "main.h"
#include <stdio.h>

int _prime(int num, int count);

/**
 * is_prime_number - checks if the number is prime number
 * @n: the number to check
 *
 * Return: 1 in (success), 0 in (not prime)
*/

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - helper function
 * @num: the number to check
 * @count: to cont over the recursion
 *
 * Return: 1 in (success), 0 in (not prime)
*/

int _prime(int num, int count)
{
	if (num < 2)
		return (0);
	else if (num % count == 0 && count < num)
		return (0);
	else if (count == num)
		return (1);
	_prime(num, count + 1);
}

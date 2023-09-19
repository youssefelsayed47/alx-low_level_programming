#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints all natural numbers from
 *		n to 98, followed by a new line.
 * @n: the start num
 * Return: nothing
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n > 98)
			n--;
		else if (n < 98)
			n++;
	}
	printf("98\n");
}

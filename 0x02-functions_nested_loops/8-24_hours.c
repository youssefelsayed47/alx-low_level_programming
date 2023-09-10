#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - a function that prints every minute of the day
 *		of Jack Bauer, starting from 00:00 to 23:59.
 * Return: nothing
*/

void jack_bauer(void)
{
	int i = 0;

	while (i < 24)
	{
		int j = 0;

		while (j < 60)
		{
			printf("%.2d:%.2d\n", i, j);
			j++;
		}
		i++;
	}
}

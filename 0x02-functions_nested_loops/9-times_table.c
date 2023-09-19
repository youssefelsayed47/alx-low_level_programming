#include "main.h"

/**
 * times_table - a function that prints the 9 times table,
 *		starting with 0.
 * return: nothing
*/

void times_table(void)
{
	int i = 0, j = 0, mul;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			mul = i * j;

			if (mul > 9 && mul < 100)
				_putchar(' ');
			else if (j != 0 && mul < 10)
			{
				_putchar(' ');
				_putchar(' ');
			}

			if (mul <= 9)
			{
				_putchar(48 + mul);
			}
			else if (mul >= 10 && mul <= 99)
			{
				_putchar(48 + (mul / 10));
				_putchar(48 + (mul % 10));
			}

			if (j == 9)
				_putchar('\n');
			else
				_putchar(',');

			j++;
		}
		i++;
	}
}

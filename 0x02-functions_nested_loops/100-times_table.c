#include "main.h"

/**
 * print_times_table - function that prints the n times table,
 *		starting with 0.
 * @n: the max of the table
 * Return: nothing
*/

void print_times_table(int n)
{
	int i = 0, j = 0, mul;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
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
					_putchar(48 + mul);
				else if (mul >= 10 && mul <= 99)
				{
					_putchar(48 + (mul / 10));
					_putchar(48 + (mul % 10));
				}
				else if (mul >= 100 && mul <= 999)
				{
					_putchar(48 + (mul / 100));
					_putchar(48 + ((mul % 100) / 10));
					_putchar(48 + (mul % 10));
				}
				if (j == n)
					_putchar('\n');
				else
					_putchar(',');
				j++;
			}
			i++;
		}
	}
}

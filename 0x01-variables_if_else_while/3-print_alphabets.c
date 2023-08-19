#include <stdio.h>

/**
 * main - Entry point
 * Description: print alphabet in lowercase then in uppercase
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 97;
	int j = 65;

	/*prints a - z*/
	while (i < 123)
	{
		putchar(i);
		i++;
	}

	/*print A - Z*/
	while (j < 91)
	{
		putchar(j);
		j++;
	}
	_putchar('\n');
	return (0);
}

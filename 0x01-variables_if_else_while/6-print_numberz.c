#include<stdio.h>

/**
 * main - Entry point
 * Description: print 0-9 using putchar while using int variable
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i = 48;

	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program adds positive numbers.
 * @argc: counts arguments
 * @argv: array of strings
 * Return: 0 if success 1 if fail
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);
	return (0);
}

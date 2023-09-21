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
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (atoi(argv[i]) == 0 && *argv[i] != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%i\n", sum);
	return (sum);
}

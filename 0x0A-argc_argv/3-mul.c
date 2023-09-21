#include <stdio.h>
#include <stdlib.h>

/**
 * main - it is a program that multiplies two numbers.
 * @argc: counts arguments
 * @argv: array of strings
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int a = atoi(argv[1]), b = atoi(argv[2]);
		int result = a * b;

		printf("%d\n", result);
		return (0);
	}
}

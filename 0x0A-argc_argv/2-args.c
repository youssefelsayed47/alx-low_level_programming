#include <stdio.h>

/**
 * main - it is a program prints all arguments it receives.
 * @argc: counts arguments
 * @argv: array of strings
 *
 * Return: always 0
*/

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}

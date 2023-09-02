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
	for (int count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}

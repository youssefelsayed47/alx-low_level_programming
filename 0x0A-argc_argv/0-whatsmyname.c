#include <stdio.h>

/**
 * main - it is a program prints its name, followed by a new line.
 * @argc: counts arguments
 * @argv: array of strings
 *
 * Return: always 0
*/

int main(int __attribute__ ((unused))  argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

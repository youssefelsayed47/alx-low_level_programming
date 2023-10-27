#include <stdio.h>

/**
 * main - it is a program that prints the number of arguments passed into it.
 * @argc: counts arguments
 * @argv: array of strings
 *
 * Return: always 0
*/

int main(int argc, char __attribute__ ((unused))  *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}

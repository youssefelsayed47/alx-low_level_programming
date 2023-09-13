#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: pointer to string
 * @f: pointer to function
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

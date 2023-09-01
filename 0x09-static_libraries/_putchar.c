#include <unistd.h>

/**
 * _putchar: writes the character c to stdout
 * @c: The characters to print
 *
 * Return: on succes 1.
 * on error, 1 is reurned, and errno is set approprately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

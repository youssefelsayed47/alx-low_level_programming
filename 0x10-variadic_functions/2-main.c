#include "variadic_functions.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings("; ", 0);
    print_strings("; ", 4, "You know", "", "nothing", NULL);
    return (0);
}

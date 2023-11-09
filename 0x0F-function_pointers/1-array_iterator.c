#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 *		a parameter on each element of an array.
 * @array: an array of integars
 * @size: size of array
 * @action: pointer to funtion
 * Return: nothing.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	if (array && action && size)
		while (i < size)
		{
			action(*array);
			array++;
			i++;
		}
}

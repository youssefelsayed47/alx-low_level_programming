#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: an array of integars.
 * @size: size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if size is not poitive or no matches, the index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		int result = cmp(*array);

		if (result != 0)
			break;
		array++;
		i++;
	}
	if (i == size)
		return (-1);
	return (i);
}

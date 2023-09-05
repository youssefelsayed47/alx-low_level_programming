#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 *		and initializes it with a specific char.
 * @size: size of the array
 * @c: the first char of the array
 * Return: NULL (size = 0), a pointer to the array, NULL (fails)
*/

char *create_array(unsigned int size, char c)
{
	char *arr_chars;
	unsigned int counter = 0;

	if (size == 0)
		return (NULL);

	arr_chars = malloc(sizeof(char) * size);
	if (arr_chars == NULL)
		return (NULL);

	while (counter < size)
	{
		arr_chars[counter] = c;
		counter++;
	}
	return (arr_chars);
	free(arr_chars);
}

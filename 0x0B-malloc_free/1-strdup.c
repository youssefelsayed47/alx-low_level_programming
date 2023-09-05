#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  a function that returns a pointer to a newly allocated
 *		space in memory, which contains a copy of the string
 *		given as a parameter.
 * @str: string
 * Return: NULL (str = NULL), returns pointer to string, NULL insufficient mem
*/

char *_strdup(char *str)
{
	char *arr_chars_str;
	int counter = 0;
	int count = 0;
	int size;

	if (str == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;
	size = count + 1;

	arr_chars_str = malloc(sizeof(char) * size);
	if (arr_chars_str == NULL)
		return (NULL);

	while (counter < size)
	{
		arr_chars_str[counter] = str[counter];
		counter++;
	}
	return (arr_chars_str);
	free(arr_chars_str);
}

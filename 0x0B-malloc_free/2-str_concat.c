#include "main.ih"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: NULL on fail, pointer on sucsess
*/

char *str_concat(char *s1, char *s2)
{
	char *arr_2_str;
	int counter = 0, count = 0;
	int size_of_s1 = 0, size_of_s2 = 0, size = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2== NULL)
		s2 = "";

	while (s1[size_of_s1] != '\0')
		size_of_s1++;
	size_of_s1 += 1;

	while (s2[size_of_s2] != '\0')
		size_of_s2++;
	size_of_s2 += 1;

	size = size_of_s1 + size_of_s2;
	arr_2_str = malloc(sizeof(char) * size);

	if (arr_2_str == NULL)
		return (NULL);

	while (counter < size_of_s1 - 1)
	{
		arr_2_str[counter] = s1[counter];
		counter++;
	}
	while (count < size_of_s2)
	{
		arr_2_str[counter] = s2[count];
		counter++;
		count++;
	}
	return (arr_2_str);
	free(arr_2_str);
}

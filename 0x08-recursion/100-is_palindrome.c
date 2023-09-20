#include "main.h"

/**
 * check_is_palindrome - helper function
 * @str: the string
 * @index: index of last char
 * @i: the first part of string
 * @j: the secound part of string
 * Return: 0 if fails, 1 if success
*/

int check_is_palindrome(char *str, int index, int i, int j)
{
	if (str[i] != str[j])
		return (0);
	if (str[i] == str[j] && j == index)
		return (1);
	i--;
	j++;
	return (1 * check_is_palindrome(str, index, i, j));
}

/**
 * is_palindrome - function that returns 1 if a string is
 *		a palindrome and 0 if not.
 * @s: the string
 * Return: 0 if fails, 1 if success
*/

int is_palindrome(char *s)
{
	int count = 0, last_index, i, j;

	while (s[count] != '\0')
		count++;
	last_index = count - 1;
	if (count % 2 == 0)
	{
		i = (count / 2) - 1;
		j = (count / 2);
	}
	else if (count % 2 != 0)
		j = i = count / 2;
	return (check_is_palindrome(s, last_index, i, j));
}

#include "main.h"

/**
 * _strcat - function that concatenate
 *		two stringe.
 *
 * @dest: pointer to destenation input
 * @src: pointer to source input
 *
 * Return: pointer to resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dost array*/
	while (dest[c])
		c++;
	/* iterate through each src array value without the null byte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[2] to dest(e) while overwr tting the null byte in dest*/
		dest[c++] = src[c2];
	return (dest);
}

#include "holberton.h"
/**
 * length - finds the length of an array
 * @i: first perimeter
 * Return: an int
 */
int length(char *i)
{
	int s = 0;

	while (i[s] != '\0')
	{
		s++;
	}
	return (s);
}
/**
 * _strncat - concertinates two strings
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns a char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = length(dest);
	for (j = 0; (src[j] != '\0') && (j < n); ++j)
	{
		dest[i] = src[j];
		++i;
	}
	dest[i] = '\0';

	return (dest);
}


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
 * strcat - concertinates two strings
 * @dest: first parameter
 * @src: second parameter
 * Return: returns a char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	
	i = length(src);
	for (j = 0; dest[j] != '\0'; j++)
	{
		src[i] = dest[j];
		i++
	}
	dest[i] = '\0';

	return (dest);
}

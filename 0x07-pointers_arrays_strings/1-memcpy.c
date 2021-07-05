#include "holberton.h"
/**
 * _memcpy - function that copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 * Return: returns a dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

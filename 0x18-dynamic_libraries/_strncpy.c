#include "main.h"
/**
 * _strncpy - copies src to dest + null <n
 * @dest: destination string
 * @src: source string
 * @n: length of characters that i need to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

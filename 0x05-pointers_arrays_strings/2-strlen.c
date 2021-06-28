#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @c - the parameter
 * Return: integer
 */
int _strlen(char *s)
{
	for(i=0; *(s + i) != '\0'; i++)
	{
		i++;
	}
	return (i);
}

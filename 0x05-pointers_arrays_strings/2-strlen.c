#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the parameter
 * Return: integer
 */
int _strlen(char *s)
{
	for (i = 0; *(s + i) != '\0'; i++)
	{}
	return (i);
}

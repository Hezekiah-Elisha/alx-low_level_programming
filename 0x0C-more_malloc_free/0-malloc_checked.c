#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function
 * @b: a parameter
 * Return: none;
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}

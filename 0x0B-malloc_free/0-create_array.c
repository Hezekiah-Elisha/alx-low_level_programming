#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * @size: param1
 * @c: param2
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (s == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s[i] == '\0'; i++)
			{
				s[i] = c;
			}
			return (s);
		}
	}
}

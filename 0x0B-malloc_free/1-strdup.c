#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * @str: param 1
 * Return: a char
 */
char *_strdup(char *str)
{
	int a, b;
	char *j;

	j = malloc(1 + (sizeof(*str) * b));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; str[b] != 0; b++)
		{}
		if (j == NULL)
		{
			return (NULL);
		}
		else
		{
			for (a = 0; a < b; a++)
			{
				j[a] = str[a];
			}
		}
		return (j);
	}
}

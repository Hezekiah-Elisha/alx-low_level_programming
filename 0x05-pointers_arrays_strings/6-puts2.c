#include "holberton.h"
/**
 * puts2 - prints every character of a string, starting with the first letter
 * @str: the parameter
 * Return: returns nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

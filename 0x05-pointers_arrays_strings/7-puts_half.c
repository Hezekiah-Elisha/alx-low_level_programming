#include "holberton.h"
/**
 * puts_half - a function that prints half of a string
 * @str: the parameter
 * Returns: none
 */
void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; *(str + i) != '\0'; i++)
	{}

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i;
	}
	for (j = n; j < str(i), j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * _puts - a function that prints a string, followed by a new line
 * @str: a parameter in the string
 * Return: returns nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

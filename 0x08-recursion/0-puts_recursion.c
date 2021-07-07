#include "holberton.h"
/**
 * _puts_recursion - a function that prints a string, followed by a new line
 * @s: first parameter
 * Return: none
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar('\n');
	_put_recursion(s + 1);
}

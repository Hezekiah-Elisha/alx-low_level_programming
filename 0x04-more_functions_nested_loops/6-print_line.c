#include "holberton.h"
/**
 * print_line - a function that draws a straight line
 * @c: a parameter
 * Return: non;
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * print_last_digit - decription is here
 * @c: a parameter
 * Return: the return value is here
 */
int print_last_digit(int c)
{
	int b = c % 10;

	if (b < 0)
	{
		b = -b;
	}
	_putchar(b + '0');
	return (b);
}

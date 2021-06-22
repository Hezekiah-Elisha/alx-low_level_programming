#include "holberton.h"

/**
 * print_alphabet - Entry point to print letters a - z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int lower = 'a';

	while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	_putchar('\n');
}

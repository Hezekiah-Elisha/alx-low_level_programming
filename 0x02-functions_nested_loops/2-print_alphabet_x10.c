#include "holberton.h"
/**
 * print_alphabet_x10 - print all the alphabets ten times
 *
 * Return: none
 */
void print_alphabet_x10(void)
{
	int num = 0;

	while (num <= 9)
	{
		int lower = 'a';

		while (lower <= 'z')
		{
			_putchar(lower);
			lower++;
		}
		_putchar('\n');
		num++;
	}
}

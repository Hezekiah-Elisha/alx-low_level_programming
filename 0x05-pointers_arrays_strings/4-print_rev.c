#include "holberton.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: thee parameter
 * Return: none so far
 */
void print_rev(char *s)
{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');
}

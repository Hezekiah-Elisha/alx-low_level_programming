#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	char letters[9] = {'H', 'o', 'l', 'b', 'e', 'r', 't', 'o', 'n'};

	int num = sizeof(letters);

	while (i < num)
	{
		_putchar(letters[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

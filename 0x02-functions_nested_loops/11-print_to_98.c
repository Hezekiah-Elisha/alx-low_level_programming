#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints numbers to 98
 * @n: a parameter
 * return: none
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}

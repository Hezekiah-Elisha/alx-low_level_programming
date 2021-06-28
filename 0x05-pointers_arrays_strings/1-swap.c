#include "holberton.h"
/**
 * swap_int - a function that swaps numbers
 * @a: first parameter
 * @b: second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}

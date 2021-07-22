#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that adds up all the arguments
 * @n: first arg
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, j = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		j = j + va_arg(args, int)
	}
	va_end(args);
	return (j);
}

#include "variadic_functions.h"
/**
 * sum_them_all - a function that adds up all the arguments
 * @n: first arg
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	int i, j = 0;

	va_start(ls, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = j + va_arg(ls, int)
		}
		return (j);
	}
	va_end(ls);
}

#include "holberton.h"
/**
 * factorial - a function that returns the fuctorial of a given number
 * @n - a parameter
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return(n * factorial(n - 1));
	}
}

#include "holberton.h"
/**
 * _islower - is shown below
 *
 * @c: A parameter
 *
 * Return: if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 &&  c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

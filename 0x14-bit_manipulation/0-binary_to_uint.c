#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a parameter
 * Return: return the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int w = 0, x, y = 0, z = 0;

	if (b == NULL || b[0] == '\0')
	{
		return (0);
	}
	else
	{
		for (x = 0; b[x] != '\0'; x++)
		{
			if (b[x] != '0' && b[x] != '1')
			{
				return (0);
			}
		}
		x--;

		while (w <= x)
		{
			y = (b[w] - '0') << (x - w);
			z = y + z;
			w++;
		}
		return (z);
	}
}

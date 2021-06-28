#include "holberton.h"
/**
 * rev_string - a function that reverses a string
 * @s: the parameter
 * Return: returns none
 */
void rev_string(char *s)
{
	int x, y, t;

	x = 0;
	y = 0;
	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (j > x)
	{
		t = s[y];
		s[y--] = s[x];
		s[x++] = t;
	}
}

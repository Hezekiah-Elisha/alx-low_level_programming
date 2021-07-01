#include "holberton.h"

/**
 * string_toupper - capitalize the string
 * @s: string
 * Return: stringe changed
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 'A' - 'a';
	}
	return (s);
}

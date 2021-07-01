#include "holberton.h"

/**
 * cap_string - capitalize string
 * @s: string to capitalize
 * Return: s
 */
char *cap_string(char *s)
{
	int i;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] + 'A' - 'a';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' ||
				s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] + 'A' - 'a';
		}
	}
	return (s);
}

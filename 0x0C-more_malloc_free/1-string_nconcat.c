#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - functions that concatenate s1 with 'n' chars of s2
 * @s1: string1
 * @s2: string2
 * @n: number of character of s2 to concatenate
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int total_len, i, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calculate total_len of n > or < len_s2 */
	if (n <= strlen(s2))
		total_len = strlen(s1) + n;
	else
		total_len = strlen(s1) + strlen(s2);
	/*malloc for p, si es NULL -> p=NULL || len = 0 => ""*/
	p = malloc(sizeof(char) * (total_len + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		*(p + i) = *(s1 + i);
	for (; i < total_len; i++)
		*(p + i) = *(s2 + j++);
	*(p + i) = '\0';
	return (p);
}

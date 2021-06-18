#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char any;

	for (any = 'a'; any <= 'z'; any++)
	{
		putchar(any);
	}
	for (any = 'a'; any <= 'z'; any++)
	{
		putchar(toupper(any));
	}
	putchar('\n');
	return (0);
}

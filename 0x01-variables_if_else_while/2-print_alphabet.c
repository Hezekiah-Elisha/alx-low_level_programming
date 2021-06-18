#include <stdio.h>

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
	putchar("\n");
	return (0);
}

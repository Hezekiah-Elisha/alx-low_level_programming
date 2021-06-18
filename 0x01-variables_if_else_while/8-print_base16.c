#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n = 48;

	while (n <= 59 || n <= 103)
	{
		putchar(n);
		n++;
		if (n == 58)
			n = 97;
		if (n == 103)
		{
			putchar ('\n');
			break;
		}
	}
	return (0);
}

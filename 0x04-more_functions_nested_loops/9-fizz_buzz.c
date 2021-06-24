#include "holberton.h"
#include <stdio.h>
/**
 * fizz_buzz - main thing works here
 * Return: none
 */
void fizz_buzz(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
	}
}

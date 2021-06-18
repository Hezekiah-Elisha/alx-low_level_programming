#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point of the program
 * Description: prints a lot of issues concerning Generating a random number
 * betty style doc for function main goes there
 * Return: 0 (Success)
 */
int main(void)
{
	int n, that_last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	that_last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d and %d is greater than 5\n", n, that_last_digit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d and %d is less than 6 and not 0\n",
				n, that_last_digit);
	}
	else
	{
		printf("Last digit %d and %d is 0\n", n, that_last_digit);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: an int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i < argc - 1)
		{
			printf("%s\n", argv[i + 1]);
		}
		else
		{
			break;
		}
	}
	return (0);
}

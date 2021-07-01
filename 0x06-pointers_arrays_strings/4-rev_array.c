#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: first parameter
 * @n: second parameter
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	tmp = 0;
	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

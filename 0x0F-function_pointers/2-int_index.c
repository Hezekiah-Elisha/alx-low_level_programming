#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array
 * @size: size of array
 * @cmp: parameter to compare values
 * Return: an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}	
	}
	return (-1);
}

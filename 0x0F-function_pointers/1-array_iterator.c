#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - a function
 * @size: parameter 1
 * @action: parameter 2
 * @array: parameter 3
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if ((action && array) != NULL)
	{
		for (j = 0; j < size; j++)
		{
			(*action)(array[j]);
		}
	}
}

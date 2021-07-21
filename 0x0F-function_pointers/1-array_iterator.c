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
	size_t i;

	if ((action && array) != NULL)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is alocated
 */
int binary_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		print_scope(array, left, right);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (value < array[mid])
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}

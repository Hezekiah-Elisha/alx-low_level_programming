#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t
 * @h: first parameter
 * Return: size of a singly linked list
 */
size_t list_len(const list_t *h)
{
	int j;

	if (j == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 1; h->next != NULL; j++)
		{
			h = h->next;
		}
		return (j);
	}
}

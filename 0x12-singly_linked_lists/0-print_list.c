#include "lists.h"
/**
 * print_list - prints all the elements of a linked list.
 * @h: Pointer to a linked list head.
 * Return: The number of total nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
	int j;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 1; h->next != NULL; j++)
		{
			if (h->str == NULL)
			{
				printf("[%u] %s\n", h->len, "(nil)");
			}
			else
			{
				printf("[%u] %s\n", h->len, h->str);
			}
			h = h->next;
		}
		printf("[%u] %s\n", h->len, h->str);
		return (j);
	}
}

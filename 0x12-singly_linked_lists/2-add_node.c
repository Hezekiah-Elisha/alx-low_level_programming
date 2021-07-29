#include "lists.h"
/**
 * length - Calculates the length of a string
 * @str: constant string
 * Return: the length of a string
 */
int length(const char *str)
{
	int a;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		for (a = 0; str[a] != '\0'; a++)
		{}
		return (a);
	}
}
/**
 * add_node - creates a node and adds it to a linked list
 * @head: Pointer to a head of the linked list
 * @str: String assigned to the node
 * Return: pointer ro the head of the linked list
 */
list_l *add_node(list_t **head, const char *str)
{
	list_l *new_node;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	else
	{
		new_node->next = *head;
	}
	new_node->str = strdup(str);
	new_mode->len = len(str);
	*head = new_node;
	return (*head);
}

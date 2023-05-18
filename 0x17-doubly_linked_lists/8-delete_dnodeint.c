#include "lists.h"

/**
 *delete_dnodeint_at_index - delete node at index
 *@head: pointer to pointer of first element
 *@index: index where to delete
 *Return: 1 (success), -1 (failure)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *next;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
		{
			current->next->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}

	next = current->next->next;
	free(current->next);
	current->next = next;

	if (next != NULL)
	{
		next->prev = current;
	}
	return (1);
}

#include "lists.h"

/**
 *get_dnodeint_at_index - gets node at index
 *@head: pointer to head of first element
 *@index: nth node
 *Return: index (success), NULL (failure)
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current = head;

	i = 0;
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}

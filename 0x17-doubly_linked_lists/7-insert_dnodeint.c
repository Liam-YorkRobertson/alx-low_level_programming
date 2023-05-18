#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts node at index
 *@h: pointer to first element
 *@idx: where to insert
 *@n: value of element
 *Return: pointer to new element (success), or null (failure)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	/*create new node*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	/*if to insert at beginning*/
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}
	/*find position to insert*/
	for (i = 0; temp && i < idx; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/*general case*/
	new_node->prev = temp->prev;
	new_node->next = temp;
	temp->prev->next = new_node;
	temp->prev = new_node;
	return (new_node);
}

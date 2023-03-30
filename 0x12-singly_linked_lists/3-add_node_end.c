#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - adds node to end of list_t
 *@head: head of the linked list
 *@str: string to put in list_t
 *Return: pointer to list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t nch;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	for (nch = 0; str[nch]; nch++)
	{
		;
	}

	new->len = nch;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (*head);
}

#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - delete node at index
 *@head: pointer to address of list
 *@index: index of node ot be deleted
 *Return: 1 (success), or -1 (failure)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{/*see notes for explanation, similar to previous*/
	listint_t *tmp; /*since we intend to delete*/
	listint_t *copyNode = *head;
	unsigned int nodeNum;

	if (copyNode == NULL) /*failure*/
	{
		return (-1);
	}
	if (index == 0) /*success*/
	{
		*head = (*head)->next;
		free(copyNode);
		return (1);
	}
	for (nodeNum = 0; nodeNum < (index - 1); nodeNum++) /*to delete at index > 0*/
	{
		if (copyNode == NULL) /*failure*/
		{
			return (-1);
		}
		copyNode = copyNode->next; /*for loop*/
	}
	tmp = copyNode->next;
	copyNode->next = tmp->next;
	free(tmp);
	return (1); /*success*/
}

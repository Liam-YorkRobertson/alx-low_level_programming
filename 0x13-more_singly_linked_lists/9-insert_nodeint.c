#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - inserts a node at a specific index
 *@head: pointer to address of list
 *@idx: index where node is to be inserted
 *@n: node data
 *Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{ /*see notes for explanation*/
	listint_t *newNode;
	listint_t *copyNode = *head;
	unsigned int nodeNum;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = copyNode;
		*head = newNode;
		return (newNode);
	}
	for (nodeNum = 0; nodeNum < (idx - 1); nodeNum++)
	{
		if (copyNode == NULL || copyNode->next == NULL)
		{
			return (NULL);
		}
		copyNode = copyNode->next;
	}
	newNode->next = copyNode->next;
	copyNode->next = newNode;
	return (newNode);
}

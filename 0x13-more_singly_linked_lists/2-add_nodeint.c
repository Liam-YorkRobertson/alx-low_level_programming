#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint - add new node at beginning of singly linked list
 *@head: pointer to struct
 *@n: the int to be inserted
 *Return: pointer to new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode; /*creating in struct*/

	newNode = malloc(sizeof(listint_t)); /*allocating mem*/

	if (newNode == NULL) /*if failure*/
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n; /*newNode = n*/
	newNode->next = *head; /*next node in struct*/

	*head = newNode; /*values added to struct*/
	return (*head);
}

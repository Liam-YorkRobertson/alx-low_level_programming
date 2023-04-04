#include "lists.h"
#include <stdlib.h>

/**
 *add_nodeint_end - add node to end of linked list
 *@head: pointer to struct
 *@n: int to be added
 *Return: pointer to struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode; /*starts creation of new node*/

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}
	/*below we assign values of newNode as per listint_t*/
	newNode->n = n; /*assign n to value*/
	newNode->next = NULL; /*next must be NULL (inserted as last node)*/

	if (*head == NULL) /*if head node is null, then make newNode as head*/
	{
		*head = newNode;
	}
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL) /*last node next address NULL*/
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode; /*add newNode to end of linked list*/
	}
	return (*head);
}

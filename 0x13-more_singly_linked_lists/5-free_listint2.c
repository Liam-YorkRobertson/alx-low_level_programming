#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a list
 *@head: pointer to address of list
 *Return: none (void)
 */

void free_listint2(listint_t **head)
{ /*same as previous, but with * ?*/
	listint_t *tmp;

	while (*head)
	{
		tmp = (*head)->next; /*stackoverflow (see notes)*/
		free(*head);
		*head = tmp;
	}
	head = NULL;
}

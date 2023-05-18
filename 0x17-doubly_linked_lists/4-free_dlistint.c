#include "lists.h"

/**
 *free_dlistint - frees a list
 *@head: double pointer to first element of list
 *Return: none (void)
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

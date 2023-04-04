#include "lists.h"
#include <stdlib.h>

/**
 *free_listint - frees listint_t list
 *@head: pointer to list to be freed
 *Return: none (void)
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head) /*let's us do the following for all elements in struct*/
	{
		tmp = head->next; /*tmp equals next node*/
		free(head); /*frees current node*/
		head = tmp; /*head equal to tmp (next node)*/
	} /*loops for all elements in list*/
}

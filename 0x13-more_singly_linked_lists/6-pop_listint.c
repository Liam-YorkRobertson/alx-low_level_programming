#include "lists.h"

/**
 *pop_listint tmp;
 *@head: pointer to address of list
 *Return: data of deleted head
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;
	/*have to use brackets, because of double pointer*/
	tmp = *head; /*head is assigned to tmp as we intend on removing it*/
	data = (*head)->n; /*data of head assigned to variable*/
	*head = (*head)->next; /*head equal to next node (second)*/

	free(tmp); /*removes head*/

	return (data); /*return head's data*/
}

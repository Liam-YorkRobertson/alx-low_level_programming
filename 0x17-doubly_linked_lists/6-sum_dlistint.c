#include "lists.h"

/**
 *sum_dlistint - returns sum of all elements
 *@head: pointer ot head of first element
 *Return: the total
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total = total + head->n;
		head = head->next;
	}
	return (total);
}

#include "lists.h"

/**
 *sum_listint - adds values of nodes
 *@head: pointer to list
 *Return: sum of all values of nodes
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head) /*just want loop, no increments*/
	{
		sum = sum + head->n; /*adds value of node to sum*/
		head = head->next; /*moves to next node*/
	}
	return (sum);
}

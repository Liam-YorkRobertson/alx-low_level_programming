#include "lists.h"

/**
 *print_dlistint - prints all elements of dlistint
 *@h: pointer to list
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)  /*not at end*/
	{
		printf("%d\n", h->n); /*n is int in list*/
		h = h->next; /*goes to next node*/
		i++;
	}
	return (i);
}

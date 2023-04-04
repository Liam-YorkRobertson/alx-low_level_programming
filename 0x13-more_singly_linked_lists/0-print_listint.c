#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints items in the list
 *@h: the singly linked list
 *Return: elements in list
 */

size_t print_listint(const listint_t *h)
{
	size_t nextElem;

	nextElem = 0;
	while (h != NULL) /*once h == NULL, the list is done*/
	{
		printf("%d\n", h->n); /*is a struct, so use "arrow" to access*/
		h = h->next;
		nextElem++; /*iterate to next*/
	}
	return (nextElem);
}

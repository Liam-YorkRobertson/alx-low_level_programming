#include "lists.h"

/**
 *listint_len - prints amount of elements in list
 *@h: the singly linked list
 *Return: teh number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

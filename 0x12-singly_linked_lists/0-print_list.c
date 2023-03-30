#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints elements of list_t list
 *@h: the singly linked list
 *Return: the number of elements in list
 *
 */

size_t print_list(const list_t *h)
{
	size_t nextel;

	nextel = 0;
	while (h != NULL)
	{
		if (h->str == NULL) /*str is in main.h, where the struct is*/
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nextel++;
	}
	return (nextel);
}

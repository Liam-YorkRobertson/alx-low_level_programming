#include "lists.h"

/**
 *list_len - gives number of elements in list
 *@h: pointer to the struct
 *Return: length of struct
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

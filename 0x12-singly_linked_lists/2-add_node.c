#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - add new node to beginning of singly linked list
 *@head: pointer to the structure
 *@str: the string
 *Return: pointer to new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int l = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = strdup(str);
	while (str[l] != '\0')
	{
		l++;
	}
	new_node->len = l;
	if (*head != NULL)
	{
		new_node->next = *head;
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
	}
	*head = new_node;
	return (*head);
}

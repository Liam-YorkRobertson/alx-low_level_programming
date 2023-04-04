#include "lists.h"

/**
 *get_nodeint_at_index - returns nth node of list
 *@head: pinter to list
 *@index: node we want
 *Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeNum;

	nodeNum = 0;
	while (nodeNum < index)
	{
		if (head == NULL) /*if node doesn't exist*/
		{
			return (NULL);
		}

		head = head->next; /*goes to next node*/
		nodeNum++;
	}
	return (head);
}

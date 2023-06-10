#include "hash_tables.h"

/**
 *hash_table_set - add new node or update node in hash table
 *@ht: pointer to hash table
 *@key: key to add
 *@value: calue associated with key
 *Return: 1 (success) or 0 (failure)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return 0;

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if the key already exists */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return 0;
			return 1;
		}
		temp = temp->next;
	}

	/* Create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return 0;
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return 0;
	}

	/* Add the new node at the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}

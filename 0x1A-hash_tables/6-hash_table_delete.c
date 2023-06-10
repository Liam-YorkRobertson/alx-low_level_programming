#include "hash_tables.h"

/**
 *hash_table_delete - deletes hash table
 *@ht: Pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	unsigned long int i;
	hash_node_t *node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}

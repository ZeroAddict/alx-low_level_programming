#include "hash_tables.h"

/**
 * hash_table_delete - deletes the ht hashtable.
 * @ht: hash table in question
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int j = 0;
	hash_node_t *node;

	while (j < ht->size)
	{
		while (ht->array[j] != NULL)
		{
			node = ht->array[j]->next;
			free(ht->array[j]->key);
			free(ht->array[j]->value);
			free(ht->array[j]);
			ht->array[j] = node;
		}
		j++;
	}
	free(ht->array);
	free(ht);
}

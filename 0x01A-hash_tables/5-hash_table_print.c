#include "hash_tables.h"

/**
 * hash_table_print - prints K-V pairs in hashtable array
 * @ht: the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, flag_count = 0;
	hash_node_t *tmp;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (flag_count > 0)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				flag_count++;
			}
		}
	}
	printf("}\n");
}

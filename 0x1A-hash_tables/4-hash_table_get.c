#include "hash_tables.h"

/**
 *hash_table_get - function retrieves a value assoc with a keky
 *@ht: hash table we're to look into
 *@key: non empty key to be found
 * Return: gets a hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int j;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || ht->array == NULL
			|| ht->size == 0 || strlen(key) == 0)
		return (NULL);

	j = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[j];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}

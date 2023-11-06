#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: number of array entries to make the table
 * Return: ptr to the created hash table, NULL otherwise
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned int j = 0;
	shash_table_t *ht = malloc(sizeof(shash_table_t));

	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->shead = NULL;
	ht->stail = NULL;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;
	return (ht);
}

/**
 * set_spair - alloc' mem to a K-Value pair in the sorted hash table
 * @key: the key, a non-empty string
 * @value: the value associated with the key
 * Return: ptr to the new node
 */
shash_node_t *set_spair(const char *key, const char *value)
{
	shash_node_t *node = malloc(sizeof(shash_node_t));

	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (NULL);
	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * set_spair_only - (no collision) set key:value pair to first array element
 * @ht: pointer to the sorted hash table
 * @key: a non-empty key string
 * @value: the value associated with the key
 * @index: index of the key
 * Return: the node, or NULL if fails
 */
shash_node_t *set_spair_only(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	shash_node_t *node = set_spair(key, value);

	if (node == NULL)
		return (NULL);
	node->next = NULL;
	ht->array[index] = node;
	return (node);
}

/**
 * update_value - updates~/reassigns~ the value of a given node
 * @node: pointer to the node
 * @value: string to put at the node
 * Return: 1 on success, 0 if it fails
 */
int update_value(shash_node_t *node, const char *value)
{
	if (strcmp(node->value, value) == 0)
		return (1);
	free(node->value);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL)
		return (0);
	strcpy(node->value, value);
	return (1);
}

/**
 * set_spair_front - key:value PairNode set to front of givn index's list.
 * @ht: pointer to the sorted hash table
 * @key: non-empty key
 * @value: the value associated with the key, can be an empty string
 * @index: the key's index
 * Return: the new node, or NULL if fails
 */
shash_node_t *set_spair_front(shash_table_t *ht, const char *key,
		const char *value, unsigned long int index)
{
	shash_node_t *newnode = set_spair(key, value);

	if (newnode == NULL)
		return (0);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (newnode);
}

/**
 * slist_set_first - sets the first addition to the sorted list
 * @ht: pointer to the sorted hash table
 * @node: pointer to the first node on the table
 * Return:  1 always
 */
int slist_set_first(shash_table_t *ht, shash_node_t *node)
{
	node->sprev = NULL;
	node->snext = NULL;
	ht->shead = node;
	ht->stail = node;
	return (1);
}

/**
 * slist_set - sets a new node before a given old node
 * @ht: pointer to the sorted hash table
 * @old_node: the node to place the new node before
 * @node: the new node to place before of the old one, lower index
 * Return: Always 1 on successful set
 */
int slist_set(shash_table_t *ht, shash_node_t *old_node, shash_node_t *node)
{
	if (old_node->sprev == NULL)
		ht->shead = node;
	node->snext = old_node;
	node->sprev = old_node->sprev;
	old_node->sprev = node;
	if (node->sprev != NULL)
		node->sprev->snext = node;
	/*else part means node isnt only present, so points to head and...*/
	return (1);
}

/**
 * slist_set_end - sets a node at the end of the sorted list
 * @ht: pointer to the sorted hash table
 * @node: the node to place at the end
 * Return: Always 1 on success
 */
int slist_set_end(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *old_node = ht->stail;

	ht->stail = node;
	node->snext = NULL;
	node->sprev = old_node;
	old_node->snext = node;
	return (1);
}

/**
 * shash_table_set - adds or updates an element to the sorted hash table
 * @ht: pointer to the sorted hash table
 * @key: non-empty key string
 * @value: the value associated with the key
 * Return: 1 on success, 0 on error
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *node, *curr_old_node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		node = set_spair_only(ht, key, value, index);
	else
	{
		while (node != NULL)
		{
			if (strcmp(node->key, key) == 0)
				return (update_value(node, value));
			node = node->next;
		}
		node = set_spair_front(ht, key, value, index);
	}
	if (node == NULL)
		return (0);
	if (ht->shead == NULL)
		return (slist_set_first(ht, node));
	curr_old_node = ht->shead;
	while (curr_old_node != NULL)
	{
		if (strcmp(curr_old_node->key, node->key) >= 0)
			return (slist_set(ht, curr_old_node, node));
		curr_old_node = curr_old_node->snext;
	}
	return (slist_set_end(ht, node));
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: a pointer to the sorted hash table array
 * @key: nonempty key
 * Return: the value associated with the key, or NULL if is not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	shash_node_t *node;

	if (ht == NULL || key == NULL || ht->array[index] == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);

	if (strcmp(ht->array[index]->key, key) == 0)
		return (ht->array[index]->value);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints key/value pairs in sorted hash table order
 * @ht: the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->shead;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints sorted key/value pairs in reverse.
 * @ht: the sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int count = 0;
	shash_node_t *node = ht->stail;

	if (ht == NULL)
		return;
	printf("{");
	while (node != NULL)
	{
		if (count > 0)
			printf(", ");
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		count++;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes a sorted hash table
 * @ht: the sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int j = 0;
	shash_node_t *node;

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

#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - addition of new node at the start of a LL
 *@head: pointer to a ptr to the LL
 *@str: added string to a node in the LL
 *Return: the address of the added element or NULL if that fails
 *Description - linked list node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *updated;

	unsigned int len = 0;

	while (str[len])
	len++;

	updated = malloc(sizeof(updated));
	if (!updated)
		return (updated);
	updated->str = strdup(str);
	updated->len = len;
	updated->next = (*head);
	(*head) = updated;

	return (*head);

}

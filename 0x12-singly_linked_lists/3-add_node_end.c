#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node_end - adds a new node to the end of a linked list
 * @head: ptr to ptr(pointer to head pointer)
 *@str: added string
 *Return: address of the newly added string element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *updated;
	list_t *temp = *head;

	unsigned int len = 0;

	while (str[len])
		len++;
	updated = malloc(sizeof(list_t));

	if (!updated)
		return (NULL);

	updated->str = strdup(str);
	updated->len = len;
	updated->next = NULL;
	if (*head == NULL)
	{
		*head = updated;
		return (updated);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = updated;

	return (updated);
}

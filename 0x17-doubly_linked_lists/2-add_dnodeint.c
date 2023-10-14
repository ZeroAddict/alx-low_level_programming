#include "lists.h"

/**
* add_dnodeint_at_index - adds nth node
* @head: ptr to head of dLL
* @n: value of node added
* Return: nth node n success, null if it fails
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h1;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	h1 = *head;

	if (h1 != NULL)
	{
		while (h1->prev != NULL)
			h1 = h1->prev;
	}
	newNode->next = h1;
	if (h1 != NULL)
		h1->prev = newNode;
	*head = newNode;
	return (newNode);
}

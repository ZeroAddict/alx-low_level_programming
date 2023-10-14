#include "lists.h"

/**
* add_dnodeint_end - adds endth node
* @head: ptr to head of dLL
* @n: value of node added
* Return: nth node address on success, null if it fails
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h1;
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	h1 = *head;

	if (h1 != NULL)
	{
		while (h1->prev != NULL)
			h1 = h1->next;
		h1->next = newNode;
	}
	else
	{
	*head = newNode;
	}
	newNode->prev = h1;
	return (new);
}

#include "lists.h"
/**
*add_nodeint - adds a new node at the beginning of a LL
*@head: head pointer to fisrt node
*@n: const int data to add to node
* Return: ptr to the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	return (NULL);
	newnode->n = n;

	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

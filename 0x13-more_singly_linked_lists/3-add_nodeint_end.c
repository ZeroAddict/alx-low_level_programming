#include "lists.h"

/**
*add_nodeint_end - adds node to the end of the LL
*@head: pointer to the head pointer
*@n: const int data to be add to new node
*Return: ptr to the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
	return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
	*head = newnode;
	return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}

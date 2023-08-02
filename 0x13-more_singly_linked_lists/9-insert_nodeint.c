#include "lists.h"
/**
* insert_nodeint_at_index - inserts node at a given position
* @head: double pointer to first node in LL
* @idx: index of the list where node is inserted
* Return: the address of node inserted
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx[])
{
	unsigned int i;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	if (!head)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; temp && i < index; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
		temp = temp->next;
	}
	return (NULL);
}

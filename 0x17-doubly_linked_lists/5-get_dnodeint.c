#include "lists.h"

/**
* get_dnodeint_at_index - returns nth node
* @head: ptr to head of dLL
* @index: index from 0 of node sought
* Return: nth node n success, null if it fails
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int totalSize;
	dlistint_t *temp;

	totalSize = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
		if (index == totalSize)
			return (temp);
		totalSize++;
		temp = temp->next;
	}
	return (NULL);
}

#include "lists.h"
/**
* pop_listint - deletes the head node of a listint_t LL
* @head: pointer to a head pointer
*
* Return: the data inthe deleted element, 0 if list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head)
	return (0);
	if (!(*head))
	return (0);
	n = (*head)->n;

	temp = (*head)->next;

	free((*head));
	*head = temp;

	return (n);
}

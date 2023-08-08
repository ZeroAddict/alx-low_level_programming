#include "lists.h"
/**
* *reverse_listint - reverses a linked list
* @head: pointer to the first node
*
* Return: a pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next = NULL;
	listint_t *previousNode = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = next;
	}
	*head = previousNode;
	return (*head);

}

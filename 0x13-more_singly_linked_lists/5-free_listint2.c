#include "lists.h"
/**
*free_listint2 - frees node
*@head: pointer to head pointer to the node
*Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;;

	if (head == NULL)
	return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}

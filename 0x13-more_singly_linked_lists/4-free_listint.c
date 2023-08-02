#include "lists.h"
/**
*free_listint - frees node
*@head: head pointer to the node
*Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	head = NULL;
}

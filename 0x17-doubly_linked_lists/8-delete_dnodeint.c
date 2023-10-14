#include "lists.h"

/**
*delete_dnodeint_at_index - deletes node dlistint_t indx
* @head: doubl ptr, head of dL
* @index: index of new node
* Return: 1 if it succeeds, -1 if it fails
*/
int delete_dnode_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *head2;
	unsigned int x;

	head1 = *head;

	if (head1 == NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;
	x = 0;

	while (head1 != NULL)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				head2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = h2;
			}
			free(head1);
			return(1);
		}
		head2 = head1;
		head1 = head1->next;
		x++;
	}
	return(-1);
}

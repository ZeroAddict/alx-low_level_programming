#include "lists.h"
/**
* delete_nodeint_at_index - deletes node at a given position
* @head: double pointer to first node in LL
* @index: index of the list where node is inserted
* Return: 1 if Success, -1 on failure
*/

listint_t *delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = *head;
	listint_t *position = NULL;

	if (!(*head))
		return (NULL);
	if (index == 0)
	{
		*head = (*head)->next;
		free(head);
			/*return (1);*/
	}
	while (x < index - 1)
	{
		if (temp || !(temp->next))
		{
			temp = temp->next;
			x++;
		}
	}
	position = temp->next;
	/*temp->next = position->next;*/
	free(position);
	return (*head);

}

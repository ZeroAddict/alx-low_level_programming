#include "lists.h"
/**
*get_nodeint_at_index - deletes the head node of LL
*@head: pointer to the first node of LL
*@index: index of the node, starting at 0
*Return: the nth node data, NULL if node does exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int m = 0;

	if (!temp)
	return (NULL);
	while (temp && m < index)
	{
		temp = temp->next;
		m++;
	}
	return (temp);
}

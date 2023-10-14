#include "lists.h"
/**
* dlistint_len - returns the no. of elem in a d.LL
* @h: head of the list
*Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int totalSizeElements;
	totalSizeElements= 0;

	if (h == NULL)
		return (totalSizeElements);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		totalSizeElements++;
		h = h->next;
	}
	return (totalSizeElements);
}

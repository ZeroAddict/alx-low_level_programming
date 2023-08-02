#include "lists.h"
#include <stdio.h>
/**
* listint_len - lists and gives the number of elements
*@h: head pointer to traverse linked list
*
*Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t numofElem = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		numofElem++;
		h = h->next;
	}
	return (numofElem);
}


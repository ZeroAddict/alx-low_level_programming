#include "lists.h"
#include <stdio.h>
/**
* print_listint - prints all elements of the linked list
*@h: Single LL of type listint_t
*
*Return: nmber of elements
*/
size_t print_listint(const listint_t *h)
{
	size_t numofElem = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		numofElem++;
		h = h->next;
	}
	return (numofElem);
}

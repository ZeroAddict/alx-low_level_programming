#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *print_list - prints all the elements in the LL
 *@h: pointer to the list_t list
 *Return: number of nodes in list
 */

size_t print_list(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		l++;
	}
	return (l);
}

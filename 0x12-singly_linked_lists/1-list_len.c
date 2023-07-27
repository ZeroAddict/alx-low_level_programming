#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the num of elements in a LL
 * @h: pointer to the list_t LL
 *
 *Return: the number of elements in the LL
 */
size_t list_len(const list_t *h)
{
	size_t b = 0;

	while (h)
	{
		b++;
		h = h->next;
	}
return (b);
}

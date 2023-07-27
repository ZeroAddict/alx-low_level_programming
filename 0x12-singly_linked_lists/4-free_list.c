#include <stdlib.h>
#include "lists.h"
/**
 *free_list - fress list
 *@head: ptr to a ptr tobeginning of linked list
 *Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

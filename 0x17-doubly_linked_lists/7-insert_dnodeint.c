#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new node at an indx
* @head: doubl ptr, head of dL
* @idx: index of new node
* @n: value of new node data
* Return: the address of the newNode, NULL if it fails
*/
int insert_dnode_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head1;
	dlistint_t *newNode;
	unsigned int x;
	
	newNode= NULL;
	if (idx == 0)
		newNode= add_dnodeint(h, n);
	else
	{
		head1 = *h;
		x = 1;
		if (head1 != NULL)
			while (head1->prev != NULL)
				head1 = head1->prev;
		while (head1 != NULL)
		{
			if (x == idx)
			{
				if (head1->next == NULL)
					newNode= add_dnodeint_end(h, n);
				else
				{
					newNode= malloc(sizeof(dlistint_t));
					if (newNode != NULL)
					{
						newNode->n = n;
						newNode->next = head->next;
						newNode->prev = head;
						head->next->prev = newNode;
						head->next = newNode;
					}
				}
				break;
			}
			head = head->next;
			x++;
		}
	}
	return (newNode);
}

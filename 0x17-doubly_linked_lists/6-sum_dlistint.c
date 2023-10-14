#include "lists.h"
/**
*sum_dlistint - sumsdata in node dlistint
* @head: ptr to prev to NULL, head of dL
* Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sumData;
	
	sumData = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sumData += head->n;
			head = head->next;
		}

	}
	return(sumData);
}

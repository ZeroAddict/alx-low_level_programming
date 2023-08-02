#include "lists.h"
/**
* sum_listint - gets the sum of all data n of a LL
* @head: pointer to the first node
* Return: 0 if LL is empty, sum of all n
*/

int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sumList = 0;

	if (head == NULL)
		return (0);

	while (temp)
	{
		sumList = sumList + (temp->n); /*sum += temp->n*/
		temp = temp->next;
	}
	return (sumList);
}

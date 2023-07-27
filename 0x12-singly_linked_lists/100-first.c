#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * _executeList - executes functions in listNodeFP through executing
 *@head: pointer to start of struct class executing
 *Return: void before main
 */
void _executeList(struct listNodeFP *head)
{
	struct listNodeFP *executing = head;

	while (executing != NULL)
	{
		executing->_callFirst();
		executing = executing->next; /*function call by _callFirst*/
	}
}
/**
 * _print_first - print sentence string before main
 *Return: void before main
 */
void _print_first(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

/**
 * initializeLinkedList - executes functions in listNodeFP in order
 *Return: void
 */
struct listNodeFP node1 = {_print_first, NULL};

void initializeLinkedList(void)
{
	node1.next = NULL;
}
/**
 *constructor - initializes nodes and points order and void
 *Return: void
 */

void constructor(void)
{
	void constructor(void) __attribute__((constructor));
	/*calling initLinkedList() in a constructor function to execute before main*/
	/*initLinkedList();*/
	_executeList(&node1);
}

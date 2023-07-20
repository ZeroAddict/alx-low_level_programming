#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 *print_name - prints a name
 *@name: the name to be printed
 *@f: pointer to the function name
 *Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;
	else
	{
		(*f)(name);
	}
}

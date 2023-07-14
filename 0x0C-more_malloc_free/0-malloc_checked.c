#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: unsigned integer input
*
*Return: v, exit status 98 if allocation by malloc_checked fails
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *v;

	v = malloc(sizeof(unsigned int))
	if (v == NULL)
	{
		exit (98);
	}
	free(v);
	return (v); 
}

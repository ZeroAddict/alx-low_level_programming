#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _memset - assigns memory for an array element
* @v: pointer variable to array
* @c: character element position in array 
*
*Return:v Always on success
*/

char *_memset(char *v, char c, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		v[i] = c;
	}
	return (v);
}

/**
* _calloc - function allocates memory for an array using malloc
* @nmemb: position in array 
* @size: unsigned int size of an element in array
*
*Return: NULL if nmemb or size = 0, if malloc fails NULL 
*if NULL '\0' is passed, treat as ""
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * (size)(unsigned int));
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}

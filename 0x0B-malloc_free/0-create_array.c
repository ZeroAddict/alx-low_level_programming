#include "main.h"
#include <stdlib.h>

/**
* create_array - function creates an array of chars
* @size: the memory space determined by array size
* @c: character to be assigned and created by function
* Return: pointer to array Success, NULL on failure & if size = 0
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int t;

	ptr = malloc(sizeof(char)*size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		ptr[t] = c;
	return (ptr);
}

/**
 *_realloc - reallocates memory
 * @v: pointer to new_size
 * @old_size: size in byte of old mem
 *@new_size: size of new
 *Return: ptr on success, NULL if new_size is 0
 */

/#include "main.h"
#include <stdlib.h>
#include <string.h>

void *_realloc(void *v, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
	free(v);
	return (NULL);
	}
	if (v == NULL)
	{
	return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (v);
	}

	void *ptr = malloc(new_size);
	if (ptr != NULL)
	{
		unsigned int size = (old_size < new_size) ? old_size : new_size;
		memcpy(ptr, v, size);
		free(ptr);
	}
	return (ptr);
}

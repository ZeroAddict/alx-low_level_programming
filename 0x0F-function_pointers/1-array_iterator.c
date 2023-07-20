#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - func returns parameter on array element
* @action: void pointer that executes by pointing to
* @size: size of array
* @array: array to be executed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
	return;
	for (k = 0; k < size; k++)
	{
	action(array[k]);
	}
}

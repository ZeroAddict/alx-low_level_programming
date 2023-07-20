/**
* int_index - function returns index of first element
* @cmp: int pointer searches for an integer (compares value)
* @size: number of elements in array
* @array: array to be searched
* Return: index of first element... -1 if size <= 0, -1 if no element matches
*/

#include <stdio.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int d;

	if (array == NULL || size <= 0 || cmp == NULL)
	return (-1);

		for (d = 0; d < size; d++)
		{
			if (cmp(array[d]))
			return (d);
		}
	return (0);
}

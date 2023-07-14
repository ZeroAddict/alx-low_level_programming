#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* *array_range - creates an array (int)
* @min: minimum range of values kept in array
* @max: maximum range kept 
*
*Return:v Always on success
* v is pointer to new array
*/
int *array_range(int min, int max)
{
	int *v;
	int k, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - (min + 1);
	ptr = malloc(sizeof(int) * size);

	if (v == NULL)
	{
		return (NULL);
	}
	for (k = 0; min <= max; k++)
	{
		v[k] = min++;
	}
	return (v);
}

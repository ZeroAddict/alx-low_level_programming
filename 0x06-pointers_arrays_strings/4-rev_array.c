#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int b)
{
	int i;
	int v;

	for (i = 0; i < b--; i++)
	{
		v = a[i];
		a[i] = a[b];
		a[b] = v;
	}
}


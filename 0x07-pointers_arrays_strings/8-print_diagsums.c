#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: variable pointer to integer
 * @size: input integer 
 * Return; Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int i, m, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (m = size -1; m <= (size * size) - size; m = m + size - 1)
		sum2 = sum2 + a[m];
	printf("%d, %d\n", sum1, sum2);
}

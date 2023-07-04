#include "main.h"

/**
 * swap_int - take in two variable integers and swaps
 * @a: swaps value and stores address of b
 * @b: swaps and stores address of a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int x, y;

	x = *b;
	y = *a

	* b = y;
	*a = x;
}

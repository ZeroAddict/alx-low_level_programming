#include "main.h"
/**
 * clear_bit - functn sets the value of a given bit to 0
 * @n: pointer to the num we'd change
 * @index: of the bit to be cleared
 * Return: 1 always for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);
	return (1);
}

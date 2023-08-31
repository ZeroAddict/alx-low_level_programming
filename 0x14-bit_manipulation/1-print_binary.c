#include "main.h"
/**
 * print_binary - prints the binary equiv of a deci number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int dec_num;

	for (i = 63; i >= 0; i--)
	{
		dec_num = n >> i;

		if (dec_num & 1)
		{
		_putchar('1');
		count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

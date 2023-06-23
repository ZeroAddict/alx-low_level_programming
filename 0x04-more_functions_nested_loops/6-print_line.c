#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @a: number of times the character _ should be printed
 */
void print_line(int a)
{
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b;

		for (b = 1; b <= a; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

#include "main.h"
/**
* print_rev - prints the string received in reverse
* @i: pointer to the string to be printed in reverse
* Return: 0
*/

void print_rev(char *i)
{
	int start = 0;

	while (i[start])
			start++;
			while (start--)
				_putchar(i[start]);
			_putchar('\n');

}

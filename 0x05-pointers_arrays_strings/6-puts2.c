#include "main.h"
/**
 * puts2 - prints characters of a string
 * @str: the used string reference
 * Return: void
 */
void puts2(char *str)
{
	int z = 0;

	while (str[z] != '\0')
	{
		_putchar(str[z]);
		z += 2;
	}
	_putchar('\n');
}

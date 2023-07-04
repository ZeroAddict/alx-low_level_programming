#include "main.h"

/**
 * _puts - function that prints a string
 * @str: pointer to the string
 *Return: string, new line
 */

 void _puts(char *str)
 {
	int a = 0;
	while (str[a])
	{
		_putchar(str[a]);
		a++
	}
	_putchar('\n');
}

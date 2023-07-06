#include "main.h"

/**
 * _print_rev_recursion - printsin reverse a string pointed at
 * @s: variable pointer to a string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}

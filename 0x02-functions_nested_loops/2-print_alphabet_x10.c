#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int ten;
	char ch;

	for (ten = 0; ten <= 10; ten++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	}
}

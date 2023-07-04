#include "main.h"
/**
* print_rev - prints the string received in reverse
* @str: pointer to the string to be printed in reverse
* Return: 0
*/

void print_rev(char *str)
{
	int start = 0;

	while (str[start])
	start++;
		while (start--)
		_putchar(str[start]);
		_putchar('\n');

}

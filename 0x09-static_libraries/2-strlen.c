#include "main.h"
 /**
 * strlen - function calculates the length of the string
 * Description - _strlen is a function that calculates the string length
 * @s: string are checked
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int stringlength = 0;

	while (s[stringlength])
		stringlength++;
	return (stringlength);
}

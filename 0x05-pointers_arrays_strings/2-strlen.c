#include "main.h"
 /**
 * _strlen - checks the length of the string
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

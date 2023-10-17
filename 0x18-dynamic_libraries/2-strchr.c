#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry
 * @a: variable pointed to at input character
 * @b: input character
 * Return: Always 0 (Success)
 */
char *_strchr(char  *a, char b)
{
	int i;

	for (i = 0; a[i] >= '\0'; i++)
	{
		if (a[i] == b)
			return (a + i);
	}
	return (NULL);
}

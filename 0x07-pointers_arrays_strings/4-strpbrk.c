#include <stdio.h>
#include "main.h"

/**
 *_strpbrk - Entry point
 * @s: input character pointer
 * @accept: input character
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int i, a;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[i] == accept[a])
				return (s + i);
		}
	}
	return (NULL);
}

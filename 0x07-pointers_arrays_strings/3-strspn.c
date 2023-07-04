#include "main.h"

/**
 * _strspn - Entry point
 * strspn - function that copies the initial segment of a string
 * @s: input character pointer variable s
 * @accept: input character
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				break;
			}
		}
		if (value == 5)
			break;
	}
	return (value);
}

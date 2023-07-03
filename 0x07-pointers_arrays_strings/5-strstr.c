#include "main.h"

/**
 * _strstr - Entry point _strstr function that locates a substring
 * @haystack: variable pointer to character input
 * @needle: input character pointer
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}

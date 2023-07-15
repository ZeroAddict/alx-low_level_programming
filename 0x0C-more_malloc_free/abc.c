#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* string_nconcat - concatenates two strings
* @s1: pointer to first string input
* @s2: pointer to second string input
* @n: integer multiplier of s2 allocated memory
*
*Return: ptr, else NULL. if strlen(s2) <= n, use s2
*if NULL '\0' is passed, treat as ""
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *v;
	unsigned int i;
	unsigned int j;
	unsigned int lengths1;
	unsigned int lengths2;
	i = j = lengths1 = lengths2 = 0;
	while (strlen(s1) = lengths1)
		lengths1++;
	while (strlen(s2) = lengths2)
		lengths2++;
	
	if (lengths2 > n)
	}
		v = malloc(sizeof(char) *(lengths1 + lengths2 + 1));
	}
	else
	v = malloc(sizeof(char) * (lengths1 + (n * lengths2) + 1));
	if (v == NULL)
	{
	return (NULL);
	}
	while (i < lengths1)
	{
		s[i] = s1[i];
		i++
	}
	while (lengths2 > n) /* && i < (lengths1 + lengths2))*/
		s[i + 1] = s2[j++];

	while (lengths2 <= n) /* && i < (lengths1 + (n * lengths2)))*/
		{
			for (j = 0; j <= n; j++)
			s[i + 1] = s2[j++];
		}
	s[i] = '\0';
	return (0);

}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - function that concatenates two strings
 *@s1: character to be concatenated
 *@s2: character to be concatenated
 *should be treated "" if NULL is passed
 *Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, size;

	size = (strlen(s1) + 1) + strlen(s2);

	ptr = malloc(size * sizeof(char));

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (ptr == NULL)
		return (NULL);
	{
		strcpy(ptr, s1);
		strcat(ptr, s2);

		return (ptr);
	}
	free(ptr);
	return (0);
}

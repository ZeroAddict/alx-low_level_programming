/**
 * string_nconcat - concatenates two strings
 * @s1: string to be concat with
 *@s2: character 2 to be be inputted
 *@n: length check on s2
 *Return: NULL if bufferi is NULL, buffer if strcat(s1, s2)
 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int lengths1, lengths2, buffer_size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lengths1 = strlen(s1);
	lengths2 = strlen(s2);

	if (n >= lengths2)
		n = lengths2;

	buffer_size = lengths1 + n + 1; // Add 1 for the null terminator

	buffer = malloc(buffer_size);
	if (buffer == NULL)
		return (NULL);

	strcpy(buffer, s1);
	strncat(buffer, s2, n);

	return (buffer);
}

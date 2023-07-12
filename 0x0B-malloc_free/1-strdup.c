#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
*_strdup - returns a pointer to newstring
* @str: pointer variable that is pointed to by function as duplicate
* Return: NULL if str = NULL, and memory is insufficient
*/

char *_strdup(char *str)
{
	char *strn;
	int size;

	size = strlen(str) + 1; /*+1string accounts for null terminator*/

	if (str == NULL)
	{
		return (NULL);
	}

	strn = malloc(size * sizeof(char)); /*maemory allocation to strn*/
	{
		if (strn == NULL)
		return (NULL);	/*Memory allocation failed insufficient memory size*/
		{
			strcpy(strn, str); /*Copy string(str) into newly strn*/
			return (strn);
		}
	}		
	free(str); /*frees memory after assignment and allocation*/
	return (str);
}

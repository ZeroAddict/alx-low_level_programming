#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* *_strdup(char *str): function returns a pointer to a new string which is a duplicate of the
string
* @str: pointer variable that is pointed to by function as duplicate
* Description: malloc obtains and duplicates memory for new string, and free frees up memory
* Return: NULL if str = NULL, and memory is insufficient
*/

char *_strdup(char *str);
{
	char *strn;
	int size;

	size = strlen(str) + 1; /*+1string accounts for null terminator*/

	if (str == NULL)
	{
		return (NULL);
	}
	else if
	for (strn = malloc(size * sizeof(char))) /*maemory allocation to strn*/
	{
		if strn == NULL;
		return (NULL);	/*Memory allocation failed insufficient memory size*/
	else
		{
			strcpy(strn, str); /*Copy string(str) into newly strn*/
			return (strn);
		}
	
	free(str); /*frees memory after assignment and allocation*/
	return (0);
}
